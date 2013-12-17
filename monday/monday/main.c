//
//  main.c
//  monday
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int month, date, index;
    scanf("%d %d",&month, &date);
    date -= 1;
    //                  1, 2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12
    int m_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //                  MON,  TUE,  WED,  THU,  FRI,  SAT, SUN 
    char *dates[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    
    if( month == 1)
    {
        index = date % 7;
    }
    else
    {
        int i;
        index = 0;
        for(i=0; i<month-1; i++)
            index += m_days[i];
        index += date;
        index %= 7;
    }
    
    printf("%s\n",dates[index]);
    
    
    return 0;
}

