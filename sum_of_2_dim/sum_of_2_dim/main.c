//
//  main.c
//  sum_of_2_dim
//
//  Created by sonnet on 13. 2. 5..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int n,m,i,j, mat[300][300];
    scanf("%d %d",&n, &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&mat[i][j]);
    
    int k,l, pair[10000][4], sum[10000] = {0,};
    scanf("%d",&k);
    // matrix 안에 저장. pair 안에 저장. sum 안에 답 저장.
    for(i=0; i<k; i++)
    {
        scanf("%d %d %d %d",&pair[i][0], &pair[i][1], &pair[i][2], &pair[i][3]);
        pair[i][0] -= 1; pair[i][1] -= 1; pair[i][2] -= 1; pair[i][3] -= 1;
        
        for(j = pair[i][0]; j<= pair[i][2]; j++)
        {
            for(l = pair[i][1]; l<= pair[i][3]; l++)
            {
                sum[i] += mat[j][l];
            }
        }
    }
    
    for(i=0; i<k; i++)
        printf("%d\n",sum[i]);
    
    
    
    
    return 0;
}

