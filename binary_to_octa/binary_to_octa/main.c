//
//  main.c
//  binary_to_octa
//
//  Created by sonnet on 13. 2. 2..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // insert code here...
    char bin[1000000] = {'\0',};
    
    scanf("%s",bin);
    int head = strlen(bin)%3;
    int i = 0;
    if      (head == 2)
    {
        i = 2;
        if(bin[1] == '1')
            i += 1;
    }
    else if(head == 1)
    {
        i = 1;
    }
    
    if(head)
        printf("%d",i);
    
    int init = head;
    i = 0;
    while ( i != (strlen(bin)/3))
    {
        int value =0;
        if(bin[init+i*3+0] == '1')
            value = 4;
        if(bin[init+i*3+1] == '1')
            value += 2;
        if(bin[init+i*3+2] == '1')
            value += 1;
        printf("%d",value);
        i++;
    }
    return 0;
}

