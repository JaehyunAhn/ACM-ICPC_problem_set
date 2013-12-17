//
//  main.c
//  number_finder
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    // 문제가 되는것은 타임아웃. 성능향상이 필요.
    int n,m,i,j;
    int findee[100000], finder[100000];
    
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&findee[i]);
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&finder[i]);
    
    // 최적화 실패. 뭐가 문젤까.
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if( findee[j] == finder[i])
            {
                printf("1\n");
                break;
            }
            if( j == n-1)
                printf("0\n");
        }
    }
    
    return 0;
}

