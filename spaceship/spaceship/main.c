//
//  main.c
//  spaceship
//
//  Created by sonnet on 13. 2. 19..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    unsigned int t, j, dist[10000];
    int i, k;
    scanf("%d",&i);
    for(k=0; k<i; k++)
    {
        scanf("%d %d",&t, &j);
        dist[k] = j - t;
    }
    
    //  등차를 구해다가 구획에 넣고 돌리면 최소값이 나온다.
    
    
    return 0;
}

