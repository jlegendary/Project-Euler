//
//  main.cpp
//   Highly divisible triangular number
//
//  Created by JLegendary on 7/12/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com


#include <iostream>
#include <cmath>

int* eSieve(int upperLimit)
{
    int sieveBound = (int)(upperLimit - 1) / 2;
    int upperSqrt = (int)((sqrt((double)upperLimit) - 1) / 2);
    bool PrimeBits[500] = {false};
    int* numbers = new int[500];
    int index = 0;
    for(int i = 2; i <= upperSqrt; i++)
    {
        if(!PrimeBits[i])
        {
            for(int j = i * i; j <= sieveBound; j += i)
            {
                PrimeBits[j] = true;
            }
            numbers[index++] = i;
        }
    }
    for(int i = upperSqrt + 1; i <= sieveBound; i++)
    {
        if(!PrimeBits[i])
        {
            numbers[index++] = i;
        }
    }
    numbers[index] = 0;
    return numbers;
}

int primeFactor(int num, int primelist[])
{
    int nOfD = 1;
    int exponent;
    int remain = num;
    
    for(int i = 0; primelist[i] != 0; i++)
    {
        if(primelist[i] * primelist[i] > num)
        {
            return nOfD * 2;
        }
        exponent = 1;
        
        while(remain % primelist[i] == 0)
        {
            exponent++;
            remain = remain / primelist[i];
        }
        nOfD *= exponent;
        
        if(remain == 1)
        {
            return nOfD;
        }
    }
    return nOfD;
}


int main()
{
    for(int c1 = 1; c1 <=10; c1++)
    {
        auto sieve = eSieve(500);
        int i1 = 2;
        int cnt = 0;
        int Dn1 = 2;
        int Dn = 2;
        while(cnt < 500)
        {
            if(i1 % 2 == 0)
            {
                Dn = primeFactor(i1 + 1, sieve);
            }
            else
            {
                Dn1 = primeFactor((i1 + 1) / 2, sieve);
            }
            cnt = Dn * Dn1;
            i1++;
        }
        if(c1 == 1)
            std::cout << "The first Triangle number to have over 500 divisors: " << i1 * (i1 - 1) / 2 << std::endl;
    }
    
        return 0;
    
}