//
//  main.c
//  Number_Finder(BST)
//
//  Created by sonnet on 13. 2. 18..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int n = *((int *)a);
    int m = *((int *)b);
    if( n > m)
        return 1;
    else if( n<m)
        return -1;
    else
        return 0;
    
}

int main()
{

    // insert code here...
    // input
    int n, m, i, index, half, flag, input[100000], search[100000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&input[i]);
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&search[i]);
    
    // sorted by QST
    qsort(input, n, sizeof(int), compare);
    
    // Find item BST
    for(i=0; i<m; i++)
    {
        index = n/2;
        half = n/2;
        if(half % 2 == 1)
            half += 1;
        flag = 0;
        
        while( input[index] != search[i])
        {
            if( half == 0)
            {
                if( index+1 <  m && input[index+1] == search[i])
                    break;
                if( index-1 >= 0 && (input[index-1] == search[i]))
                    break;
                printf("0\n");
                flag = 1;
                break;
            }
            if     ( input[index] < search[i])
            {
                half /= 2;
                //printf("(%d-%d)",index,half);
                index = index + half;
            }
            else if( input[index] > search[i])
            {
                half /= 2;
                //printf("(%d-%d)",index,half);
                index = index - half;
            }
        }
        if(flag == 0)
            printf("1\n");
    }
    // 1 or 0 print
    return 0;
}

