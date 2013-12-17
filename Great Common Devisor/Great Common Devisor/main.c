//
//  main.c
//  Great Common Devisor
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//
// 유클리디안 알고리즘을 이용하여 GCD를 구하고 과감하게 날려버리자.
// GCD(a,b)
// a = bg + r 일 때,
// gcd(a,b) = gcd(b,r) 임을 이용하는 방식.
// when? r == 0 이면 끝.

#include <stdio.h>

int main()
{

    // insert code here...
    int t;
    scanf("%d",&t);
    int pair[1000][2], answer[1000];
    
    int i;
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &pair[i][0], &pair[i][1]);
        if(pair[i][0] < pair[i][1])
        {
            int temp = pair[i][0];
            pair[i][0] = pair[i][1];
            pair[i][1] = temp;
        }
    } // 앞에 녀석이 무조건 더 크다.
    
    int g,r,mul;
    for(i=0; i<t; i++)
    {
        mul = pair[i][0] * pair[i][1];
        // 1. Eucledian algorithm으로 GCD 구하기
        g = pair[i][0]/pair[i][1];
        r = pair[i][0]%pair[i][1];
        if( r == 0)
            answer[i] = pair[i][1];

        while(r != 0)
        {
            pair[i][0] = pair[i][1];
            pair[i][1] = r;
            
            int temp = r;
            
            g = pair[i][0]/pair[i][1];
            r = pair[i][0]%pair[i][1];
            
            if(r == 0)
                answer[i] = temp;
        }
        
        // 2. a * b / GCD 하기
        answer[i] = mul / answer[i];
    }
    
    for(i=0; i<t ;i++)
        printf("%d\n",answer[i]);
    
    
    return 0;
}

