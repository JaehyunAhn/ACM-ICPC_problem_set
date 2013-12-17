//
//  main.c
//  vector_matching
//
//  Created by sonnet on 13. 2. 5..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int test,k;
    double set[20][2];
    scanf("%d",&test);
    for(k=0; k<test; k++)
    {
        int n, i;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%lf %lf", &set[i][0], &set[i][1]);
        
        
    }
    return 0;
}

