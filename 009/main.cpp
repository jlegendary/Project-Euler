//
//  main.cpp
//   Special Pythagorean triplet
//
//  Created by JLegendary on 6/28/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
#include <cmath>

int main()
{
    int sumTot = 1000;                                                      // a+b+c = 1000
    int a,b,c;
    
    for (a = 1; a < 1000; a++)
    {
        for (b = a + 1; b < 1000; b++)
        {
            c = (sumTot - a - b);                                           // c = 1000-a-b
            if ((pow(a,2)) + (pow(b,2)) == (pow(c,2)))                      // (a^2 + b^2 = c^2)
            {
                std::cout << "a=" << a
                         << "\nb=" << b
                         << "\nc=" << c
                         << "\n\nProduct: " << a*b*c                        // a*b*c =
                         << std::endl;
            }
            
        }
    
    }
 
    return 0;
}