//
//  main.c
//  cabbage
//
//  Created by sonnet on 13. 2. 20..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
// cabbage finder
int main()
{

    // insert code here...
    int t, i, j, l, k, cabbage[100][100], n, m, count = 0, result[10000];
    scanf("%d",&t);
    for(l=0; l<t; l++)
    {
        count = 0;
        for(i=0;i<100;i++)
            for(j=0;j<100;j++)
                cabbage[i][j] = -1; // initialize
        
        scanf("%d %d %d",&n,&m,&k);
        int temp = n;
        n = m;
        m = temp;
        
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cabbage[i][j] = 0; // cabbage field setting
        for(i=0;i<k;i++)
        {
            int temp1, temp2;
            scanf("%d %d",&temp1, &temp2);
            cabbage[temp2][temp1] = 1; // put cabbage into a field
        }
        
        // search island
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                int detect_flag = 0;
                if(cabbage[i][j] == 1)
                {// up down left right
                    if(i-1>=0 && cabbage[i-1][j] == 2)
                        detect_flag = 1;
                    if(i+1< n && cabbage[i+1][j] == 2)
                        detect_flag = 1;
                    if(j-1>=0 && cabbage[i][j-1] == 2)
                        detect_flag = 1;
                    if(j+1< m && cabbage[i][j+1] == 2)
                        detect_flag = 1;
                    
                    cabbage[i][j] = 2;
                    if(i-1>=0 && cabbage[i-1][j] == 1)
                        cabbage[i-1][j] = 2;
                    if(i+1< n && cabbage[i+1][j] == 1)
                        cabbage[i+1][j] = 2;
                    if(j-1>=0 && cabbage[i][j-1] == 1)
                        cabbage[i][j-1] = 2;
                    if(j+1< m && cabbage[i][j+1] == 1)
                        cabbage[i][j+1] = 2;
                    
                    if(detect_flag == 0) // 2 없으면
                    {
                        count++;
                    }
                }
            }
        }
        result[l] = count;
        printf("\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                printf("%d ",cabbage[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    
    for(i=0; i<t; i++)
        printf("%d\n",result[i]);
    
    return 0;
}

