//
//  main.cpp
//   Lattice paths
//
//  Created by JLegendary on 8/20/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>

typedef long long travel;
travel grid(int j, int k);


int main()
{
    std::cout << "There are " << grid(20,20) << " routes through a 20x20 grid" << std::endl;
    return 0;
}


travel grid (int j, int k)
{
    travel movement[(j+1)][(k+1)];
    
    for (int i=1; i<=j; i++)
    {
        movement[i][0] = 1;
    }
    
    for (int i=1; i<=k; i++)
    {
        movement[0][i] = 1;
    }
    
    for (int i=1; i<=j; i++)
    {
        for (int j=1; j<=k; j++)
        {
            movement[i][j] = movement[(i-1)][j]+movement[i][(j-1)];
        }
    }
    
    return movement[j][k];
}

