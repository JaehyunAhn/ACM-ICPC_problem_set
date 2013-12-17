//
//  main.c
//  counting_factorial
//
//  Created by sonnet on 13. 2. 13..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int fact;
    scanf("%d", &fact);
    
    int count = 0;
    int i = 0;
    if( fact == 0)
    {
        printf("%d", count);
        return 0;
    }
    for( i = 0; i<=fact; i++)
    {
        if( i%125 == 0 && i/125 != 0)
        {
            count += 3;
            continue;
        }
        else if( i%25 == 0 && i/25 != 0)
        {
            count += 2;
            continue;
        }
        else if( i%5 == 0 && i/5 != 0)
        {
            count += 1;
            continue;
        }
    }
    
    printf("%d", count);
    return 0;
}

