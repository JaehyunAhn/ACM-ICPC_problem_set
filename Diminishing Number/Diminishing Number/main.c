//
//  main.c
//  Diminishing Number
//
//  Created by sonnet on 13. 2. 19..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int i, j, k, index, l, flag = 0;
    char *number[1000000], digit[10];
    // i = 자리수, j = 한계 자리수, k = 자리마다 돌면서 채워짐, index = 0 ~ ++
    scanf("%d",&index);
    l = 0;
    for(i=0; i<10; i++)// 자리수
    {
        for(j=i; j>=0; j--)// 한계자리수
        {
            if(j == i)
                digit[j] = 48+l++;
            
            for(k=0; k<10; k++)// 인덱스
            {
               /* if(j==i)
                {
                    digit[j] = k+48; // 맨 첫자리
                }
                else*/
                if(i == 0)
                    digit[i] = k+48;
                {
                    if(digit[j+1] > k+48)
                        digit[j] = k+48;
                }
                if(j == 0)
                    printf("%c%c%c%c%c%c%c%c%c%c\n",digit[9],digit[8],digit[7],digit[6],digit[5],digit[4],digit[3],digit[2],digit[1],digit[0]);
            }
         }
    }
    
    
    return 0;
}

