//
//  main.cpp
//  Project 1 Multiples of 3 and 5
//
//  Created by Lejendary on 6/24/15.
//  Copyright (c) 2015 Lejendary. All rights reserved.
//


#include <iostream>

int main()
{
    int i;
    int sum = 0;
    int num;
    
    // Find the sum of all the multiples of 3 or 5 below what number
    std::cout << "Below what number: " << std::endl;
    std::cin >> num;
    
    for (i = 0; i < num; i++)
    {
        if(i%3 == 0 || i%5 == 0)
            sum+=i;       //sum = i+ sum
    }
    
    std::cout << "Answer is: " << sum << std::endl;
    
    return 0;
}
