//
//  main.c
//  distributed_computing
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{
    // insert code here...
    unsigned int t,i,j, ans[100000], test[100000][2];
    scanf("%d",&t);
    
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &test[i][0], &test[i][1]);
        ans[i] = 1;
    }
    
    for(i=0; i<t; i++)
    {
        for(j=0; j<test[i][1]; j++)
        {
            ans[i] *= test[i][0];
            ans[i] %= 10;
        }
        if(ans[i] == 0)
            ans[i] = 10; // test case (10, 1) 경곗값 처리
    }

    for(i=0;i<t;i++)
        printf("%d\n",ans[i]);
    return 0;
}

