//
//  main.c
//  korean_bread2
//
//  Created by sonnet on 13. 2. 12..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int date, bread;
    scanf("%d %d", &date, &bread);
    // date -1과, date -2가 해당 달의 coefficient이다.
    int i, a, b, coeff[34]={1,1,};
    a = 1; b =1;
    for(i=2; i<34; i++)
    {
        coeff[i] = a + b;
        a = b;
        b = coeff[i];
        printf("%d ",coeff[i]);
    }
    
    // 왜 데이트까지만이라고 생각했을까? ㅂㅅ
    
    return 0;
}

