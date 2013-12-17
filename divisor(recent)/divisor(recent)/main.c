//
//  main.c
//  divisor(recent)
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int t,i,ans;
    scanf("%d",&t);
    unsigned int numbers[50];
    for(i=0; i<t; i++)
        scanf("%d",&numbers[i]);
    
    if(t == 1)
        ans = numbers[0]*numbers[0];
    else
    {
        int min = 10000000;
        int max = 1;
        
        for(i=0;i<t;i++)
        {
            if(numbers[i] > max)
                max = numbers[i];
            if(numbers[i] < min)
                min = numbers[i];
        }
        ans = max * min;
    }
    
    printf("%d\n",ans);
    
    return 0;
}

