//
//  main.c
//  Easy to solve
//
//  Created by sonnet on 13. 2. 13..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int a, b, i, j, sum = 0, fill[1000] = {0,};
    scanf("%d %d",&a, &b);
    a -= 1;
    b -= 1;
    
    for(i = 1; i<51; i++)
    {
        for( j = i*(i-1)/2; j <= i*(i+1)/2-1; j++)
        {
            if(j == 1000)
                break;
            fill[j] = i;
        }
    }
    
    for(i=a; i<=b; i++)
        sum += fill[i];
    
    printf("%d",sum);
    
    
    return 0;
}

