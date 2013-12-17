//
//  main.c
//  plug
//
//  Created by sonnet on 13. 2. 5..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int n, plug[500000], i, sum = 0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&plug[i]);
    for(i=0; i<n; i++)
        sum += plug[i];
    sum -= (n-1);
    printf("%d\n",sum);
    return 0;
}

