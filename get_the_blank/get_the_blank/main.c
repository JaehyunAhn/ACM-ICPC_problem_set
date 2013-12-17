//
//  main.c
//  get_the_blank
//
//  Created by sonnet on 13. 2. 2..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    char santance[1000000] = {'\0'};
    scanf("%[^\n]",santance);
    
    int count=0;
    if((santance[0] != 32) && (santance[0] != '\0'))
        count++;
    
    int i = 1;
    while( santance[i])
    {
        if((santance[i] != 32) && (santance[i-1] == 32))
            count++;
        i++;
    }
    printf("%d\n",count);
    
    return 0;
}

