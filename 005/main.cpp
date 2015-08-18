//
//  main.cpp
//   Smallest mutliple
//
//  Created by JLegendary on 6/26/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>


long gcd(long a, long b)
{
    while (b)
    {
        long prevB = b;
        b = a % b;
        a = prevB;
    }
    return a;
}


long lcm(long a, long b)
{
    return a * (b / gcd(a, b));
}


int main()
{
    long result = 20;
    
    for (long number = result - 1; number > 1; --number)
    {
        result = lcm(result, number);
    }
    
    std::cout << result << std::endl;
}