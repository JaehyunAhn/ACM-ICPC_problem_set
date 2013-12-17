//
//  main.c
//  octa to decimal
//
//  Created by sonnet on 13. 2. 2..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{
    int head[7] = { 1, 10, 11, 100, 101, 110, 111};
    char *tail[8] = { "000", "001", "010", "011", "100", "101", "110", "111"};
    char octa[333334] = {'\0',};
    scanf("%s",octa);
    
    if(octa[0] == '0')
    {
        printf("0\n");
        return 0;
    }
    else
    {
        printf("%d",head[(octa[0]-49)]);
    }
    
    int i = 1;
    
    while(octa[i] != '\0')
    {
       printf("%s",tail[(octa[i]-48)]);
        i++;
    }
    return 0;
}
