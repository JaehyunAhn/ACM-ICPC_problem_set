//
//  main.c
//  Triangle
//
//  Created by sonnet on 13. 2. 13..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int n, i, j, max = 0;
    int triangle[500][500] = {0,};
    int copied_t[500][500] = {0,};
    scanf("%d",&n);
    for(i = 0 ; i<n; i++)
        for(j=0; j<=i; j++)
            scanf("%d",&triangle[i][j]);
    
    // search
    copied_t[0][0] = triangle[0][0];
    for(i = 1; i<n; i++)
    {
        max = 0;
        for(j=0; j<=i; j++)
        {
            // 윗층 보면서
            // 바로 위, 대각선 왼쪽 보고, 가장 큰놈 + 현재 저장 = copied_t에다가
            if(j == 0)
                copied_t[i][j] = triangle[i][j] + copied_t[i-1][j];
            else if(j == i)
                copied_t[i][j] = triangle[i][j] + copied_t[i-1][j-1];
            else
            {
                if( copied_t[i-1][j] > copied_t[i-1][j-1] )
                    copied_t[i][j] = triangle[i][j] + copied_t[i-1][j];
                else
                    copied_t[i][j] = triangle[i][j] + copied_t[i-1][j-1];
            }
        }
    }
    
    j = 0;
    for(i = 0; i<=n; i++)
        if( j < copied_t[n-1][i])
            j = copied_t[n-1][i];
    
    printf("%d",j);
    
    
    return 0;
}

