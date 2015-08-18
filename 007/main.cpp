//
//  main.cpp
//  PE7
//
//  Created by Lejendary on 6/28/15.
//  Copyright (c) 2015 Lejendary. All rights reserved.
//

#include <iostream>

//Is it prime
bool isItPrime(int num)
{
    int a;
    for(a=2; a <num; a++)
    {
        if(num%a == 0)
            return false;
    }
    return true;
}

//Find 100001th prime
int main()
{
    int counter = 0;
    int b = 2;
    while(counter != 10001)
    {
        if(isItPrime(b))
        {
            counter++;
        }
        b++;
    }
    b--;                             
    std::cout << b << std::endl;
    
    return 0;
}