//
//  main.c
//  resistance
//
//  Created by sonnet on 13. 2. 19..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct resistance
{
    char name[7];
    int value;
    int mul;
} resistance;

int main()
{

    // insert code here...
    char first[7] = {'\0',};
    char second[7] = {'\0',};
    char third[7] = {'\0',};
    int i, value1, value2, multi;
    scanf("%s",first);
    scanf("%s",second);
    scanf("%s",third);
    
    resistance resist[10];
    strcpy(resist[0].name,"black");
    strcpy(resist[1].name,"brown");
    strcpy(resist[2].name,"red");
    strcpy(resist[3].name,"orange");
    strcpy(resist[4].name,"yellow");
    strcpy(resist[5].name,"green");
    strcpy(resist[6].name,"blue");
    strcpy(resist[7].name,"violet");
    strcpy(resist[8].name,"grey");
    strcpy(resist[9].name,"white");
    
    for(i=0; i<10; i++)
    {
        resist[i].value = i;
        resist[i].mul = i;
    }
    
    for(i=0; i<10; i++)
    {
        if(strcmp(resist[i].name, first) == 0)
            value1 = resist[i].value;
        if(strcmp(resist[i].name, second)== 0)
            value2 = resist[i].value;
        if(strcmp(resist[i].name, third) == 0)
            multi = resist[i].mul;
    }
    
    if(strcmp(first, "black") == 0)
        printf("%d",value2);
    else
        printf("%d%d",value1,value2);
    
    if(strcmp(first, "black") == 0 && strcmp(second, "black") == 0)
    {
        ;;
    }
    else
    {
        for(i=0; i<multi; i++)
            printf("0");
    }
    printf("\n");
    
    return 0;
}

