//
//  main.c
//  distance_to_the_square
//
//  Created by sonnet on 13. 2. 13..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int x, y, w, h;
    scanf("%d %d %d %d",&x, &y, &w, &h);
    
    int min = 0;
    
    min = x;
    if( w-x < min)
        min = w-x;
    if(   y < min)
        min = y;
    if( h-y < min)
        min = h-y;
    
    printf("%d",min);
    
    return 0;
}

