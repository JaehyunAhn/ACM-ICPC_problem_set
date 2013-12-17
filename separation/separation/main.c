//
//  main.c
//  separation
//
//  Created by sonnet on 13. 2. 18..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main ()
{

    // insert code here...
    unsigned long long n, f;
    int i;
    scanf("%llu %llu",&n, &f);
    
    
    {/// 병신...인듯...
        n = n - n%100;
        //printf("%llu +",n);
        for(i=0; i<100; i++)
        {
            if((n+i)%f == 0)
            {
                //printf(" %llu \n %.2llu",i,i);
                printf("%.2d\n",i);
                break;
            }
        }
    }
    return 0;
}