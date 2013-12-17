//
//  main.c
//  divisor
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int t;
    scanf("%d",&t);
    
    int i,j;
    unsigned int numbers[50], copy[50];
    
    for(i=0; i<t; i++)
    {
        scanf("%d",&numbers[i]);
        copy[i] = numbers[i];
    }
    
    // we must find how to play with mod.
    int min = 10000000;
    int max = 1;
    for(i=0; i<t; i++)
    {
        min = 10000000;
        max = 1;
        for(j=0; j<t; j++)
        {
            if((i != j) && (numbers[i]%numbers[j] == 0)) // j가 divisor
            {
                //printf("%d %d find!\n",numbers[i],numbers[j]);
                if(numbers[i] > max)
                    max = numbers[i];
                if(numbers[j] < min)
                    min = numbers[j];
                copy[j] = 1;
            }
        }
    }
    
    int count = 0;
    int ans = 1;
    for(i=0; i<t; i++)
        if(copy[i] > 1)
            count++;
    if(count == 1)
        ans = min * max;
    else
        for(i=0; i<t; i++)
            ans *= copy[i];
    
    printf("%d\n",ans);
    
    
    
    return 0;
}

