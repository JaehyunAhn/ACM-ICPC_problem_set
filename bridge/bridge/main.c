//
//  main.c
//  bridge
//
//  Created by sonnet on 13. 2. 19..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    unsigned long long t, cases[10000][2], triangle[30][30], overflow[30][30];
    int i, j;
    scanf("%llu",&t);
    for(i=0; i<t; i++)
        scanf("%llu %llu",&cases[i][0],&cases[i][1]);
    
    for(i=0; i<30; i++)
    {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        for(j=0; j<30; j++)
            overflow[i][j] = 0;
    }
    
    for(i=2; i<30; i++)
    {
        for(j=1; j<=i; j++)
        {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            overflow[i][j] = triangle[i][j]/10000;
            overflow[i][j] = overflow[i][j] + overflow[i-1][j-1] + overflow[i-1][j];
            triangle[i][j] %= 10000;
        }
    }
    
    


    for(i=0; i<t; i++)
    {
        if(overflow[cases[i][1]][cases[i][0]] != 0)
            printf("%llu%.4llu\n", overflow[cases[i][1]][cases[i][0]], triangle[cases[i][1]][cases[i][0]]);
        else
            printf("%llu\n",triangle[cases[i][1]][cases[i][0]]);
    }
   /*
    for(i=1; i<=29; i++)
    {
        for(j=1; j<=i; j++)
            printf("%llu%.4llu\t\t%d %d\n",overflow[i][j],triangle[i][j],i,j);
    }*/

    return 0;
}

