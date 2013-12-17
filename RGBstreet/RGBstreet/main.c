//
//  main.c
//  RGBstreet
//
//  Created by sonnet on 13. 2. 15..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int n, i;
    scanf("%d",&n);
    int array[1000][3];
    int copied[1000][3];
    for(i=0; i<n; i++)
        scanf("%d %d %d",&array[i][0], &array[i][1], &array[i][2]);
    
    copied[0][0] = array[0][0];
    copied[0][1] = array[0][1];
    copied[0][2] = array[0][2];
    for(i=1; i<n; i++)
    {
        copied[i][0] = array[i][0]+copied[i-1][1];
        if( copied[i][0] > array[i][0]+copied[i-1][2])
            copied[i][0] = array[i][0]+copied[i-1][2];
    
        copied[i][1] = array[i][1]+copied[i-1][0];
        if( copied[i][1] > array[i][1]+copied[i-1][2])
            copied[i][1] = array[i][1]+copied[i-1][2];
    
        copied[i][2] = array[i][2]+copied[i-1][0];
        if( copied[i][2] > array[i][2]+copied[i-1][1])
            copied[i][2] = array[i][2]+copied[i-1][1];
        
    }
    
    int min = 0;
    min = copied[n-1][0];
    if(min > copied[n-1][1])
        min = copied[n-1][1];
    if(min > copied[n-1][2])
        min = copied[n-1][2];
    printf("%d\n",min);
    
    return 0;
}

