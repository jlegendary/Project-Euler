//
//  main.cpp
//   Summation of primes
//
//  Created by JLegendary on 7/2/15.
//  Copyright (c) 2015 JLegendary All rights reserved.
//


#include <iostream>
#include <vector>

int main()
{
    //Store prime as bool in a vector
    std::vector<bool>prime(2000000,true);
    
    //Sieve of Eratosthenes
    prime[1] = false;
    for(int a = 2; a*a < prime.size(); ++a)
    {
        if(prime[a]==true)
        {
            for(int b = 0; a*a+b*a < prime.size(); ++b)
            {
                prime[a*a+b*a] = false;
            }
        }
    }
    
    //Add prime numbers
    long long totalPrime = 0;
    for(int p = 1; p < prime.size(); p++)
    {
        if(prime[p] == true)
            totalPrime +=p;
    }
    std::cout << "The sum of all the primes below two million is: " << totalPrime << std::endl;
    
    return 0;
}