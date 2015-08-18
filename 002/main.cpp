//
//  main.cpp
//   Even Fibonacci numbers
//
//  Created by JLegendary on 6/24/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


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
