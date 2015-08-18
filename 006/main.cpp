//
//  main.cpp
//   Sum square difference
//
//  Created by JLegendary on 6/29/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include <iostream>
#include <cmath>

int main()
{
    int a, c;
    int sumOS = 0;
    int sumTot = 0;
    int squSum = 0;
    int squTot = 0;
    int diff;
    
    // Sum of the squares
    for (a=0; a<100; a++)
    {
        sumOS= pow(a+1,2);                            // sumOS = (a+1)^2
        sumTot+=sumOS;                                // sumTot = sumTot + sumOS
    }
    
    // Square of the sum
    for (c=1; c<101; c++)
    {
        squSum+=c;                                    // squSum = squsum+c
    }
    squTot = pow(squSum, 2);                          // squTot = (squSum)^2
    
    //Difference
    diff = squTot - sumTot;
    
    std::cout << "Sum of the square is: " << sumTot << std::endl;
    std::cout << "Square of the sum is: " << squTot << std::endl;
    std::cout << "Difference is: " << diff << std::endl;
    
    return 0;
}