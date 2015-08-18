//
//  main.cpp
//  PE3
//
//  Created by Lejendary on 6/25/15.
//  Copyright (c) 2015 Lejendary. All rights reserved.
//

#include <iostream>

int main()
{
    long long n;
    
    std::cout << "Largest prime factor of what number: " << std::endl;
    std::cin >> n;
    
    int z = 2;
    while (z * z <= n)
        if (n%z == 0)
        {
            n /= z;
        }
        else
            z++;
    
    long long f=2;
    if (n<f)
        f= n;
        std::cout << n << std::endl;
    
    
    return 0;
}


