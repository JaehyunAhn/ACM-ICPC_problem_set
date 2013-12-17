//
//  main.c
//  Charcounter
//
//  Created by sonnet on 13. 2. 2..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{
    int char_count[27] = {0,};
    char word[1000000] = {'\0'};
    
    scanf("%s",word);
    int i = 0;
    while (word[i])
    {
        if(word[i]-97>=0)
            char_count[word[i]-97]++;
        else
            char_count[word[i]-65]++;
        i++;
    }
    
    char best = 'A';
    int max = 0;
    int max_dix;
    for(i=0; i<27; i++)
    {
        if(char_count[i] == max)
            max_dix = -1;
        if(char_count[i] > max)
        {
            max_dix = i;
            max = char_count[i];
        }
    }
    if( max_dix == -1)
        printf("?\n");
    else
        printf("%c\n",best+max_dix);
    
    return 0;
}

