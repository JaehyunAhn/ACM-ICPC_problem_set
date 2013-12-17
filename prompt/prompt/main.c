//
//  main.c
//  prompt
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // insert code here...
    int t,i,j;
    scanf("%d",&t);

    char string[50][51];
    
    for(i=0; i<t; i++)
        scanf("%s",string[i]);
    
    char answer[50];
    for(i=0; i<51; i++)
        answer[i] = '\0';
    for(j=0; (j < strlen(string[0])); j++)
    {
        int flag = 1;
        char temp = string[0][j];
        for(i=0; i<t; i++)
        {
            if(temp != string[i][j])
            {
                flag = 0;
                if(!flag)
                    break;
            }
        }
        if(flag)
            answer[j] = string[0][j];
        else
            answer[j] = '?';
    }
    
    printf("%s",answer);
    
    return 0;
}

