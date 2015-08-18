//
//  main.cpp
//   Largest palindrome product
//
//  Created by JLegendary on 6/25/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//

#include<iostream>

int palindrome(int x)
{
    int num;
    int reverse = 0;
    int temp;
    
    num = x;
    temp = num;
    
    // Is it palindrome
    while (temp > 0)
    {
        reverse = reverse * 10;
        reverse = reverse + temp%10;
        temp/= 10;                              //temp = temp/10;
    }
    
    // Return the number if palindrome
    if (num == reverse)
    {
        return num;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int checkIfPalind;
    int itIsPalind;
    int highestPalind=0;
    int fDig,sDig;
    
    // For 100 to 999
    for(fDig=100;fDig<1000;fDig++)
    {
        for(sDig=100;sDig<1000;sDig++)
        {
            checkIfPalind = fDig*sDig;
    // Check if palindrome
            itIsPalind = palindrome(checkIfPalind);
    // If the palindrome is higher than previous, it becomes the highest
            if(itIsPalind>highestPalind)
            {
                highestPalind = itIsPalind;
            }
        }
    }
    //Output the highest palindrome
    std::cout << "The largest palindrome from product of two 3-digits number is: " << highestPalind << std::endl;
    
    return 0;
}