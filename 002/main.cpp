//
//  main.cpp
//  Project Euler 2
//
//  Created by Lejendary Kim on 6/24/15.
//  Copyright (c) 2015 Lejendary. All rights reserved.
//
//  Problem 2
//  Each new term in the Fibonacci sequence is generated by adding the previous two terms.
//  By starting with 1 and 2, the first 10 terms will be:
//        1,2,3,5,8,13,21,34,55,89...
//  By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.



#include <iostream>


int i;
int first = 1;
int second = 2;
int next;
int n;
int sum = 0;


int main()
{
    for (i=0; i<34; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
                if (next%2 == 0)
                {
                    sum+=next;
                }
        }
    }

    
    std::cout << "Total is: " << sum+2;
    
    return 0;
}