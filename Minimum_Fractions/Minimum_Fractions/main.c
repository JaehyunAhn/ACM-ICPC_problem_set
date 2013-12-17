//
//  main.c
//  Minimum_Fractions
//
//  Created by sonnet on 13. 2. 4..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    unsigned int number[2][2], num, den, large, small;
    scanf("%u %u", &number[0][0], &number[0][1]);
    scanf("%u %u", &number[1][0], &number[1][1]);
    
    num = number[0][0] * number[1][1] + number[0][1] * number[1][0];
    den = number[0][1] * number[1][1];
    
    // GCD구해서 각 수에 나눠준다. Eucledian Algorithm
    // a = b*d + r;
    unsigned int d, r;
    if(den > num)
    {
        large = den;
        small = num;
    }
    else
    {
        large = num;
        small = den;
    }
    
    d = large/small;
    r = large%small;
    
    while( r != 0)
    {
        large = small;
        small = r;
        d = large/small;
        r = large%small;
    }
    printf("%d %d",num/small ,den/small);
    
    return 0;
}

