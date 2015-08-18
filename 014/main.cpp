//
//  main.cpp
//   Longest Collatz Sequence
//
//  Created by Jlegendary on 8/15/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//

#include<iostream>

int main()
{
    const int highNum = 1000000;
    long max=0;
    long maxNum=0;
    long chain[highNum + 1];
    long n;
    
    for(int iii=2;iii<=highNum;iii++)
    {
        n=iii;
        int k=0;
        while(n>=iii && n!=1)
        {
            k++;
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=((3*n)+1);
            }
        }
        chain[iii]=k+chain[n];
        
        if(chain[iii]>max)
        {
            maxNum=iii;
            max=chain[iii];
        }
    }
    
    std::cout<< "Longest chain: "<<maxNum;
    
    return 0;
}