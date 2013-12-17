//
//  main.c
//  korean_bread
//
//  Created by sonnet on 13. 2. 12..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int day, bread;
    int data[33] = {      1,       1,       2,     3,    5,     8,    13,    21,    34,    55,
                         89,     144,     233,   377,  610,   987,  1597,  2584,  4181,  6765,
                      10946,   17711,   28657, 46368,75025,121393,196428,317811,514239,832050,
                    1346289, 2178339, 3524628};
    scanf("%d %d",&day, &bread);
    day -= 1; // 바로 앞 두 개가 상수
    int i;
    for(i=1; i<= 100000; i++)// 왜 i를 데이트라고만 생각했을까? ㅂㅅ
    {
        if( 0 == ((bread - data[day-2]*i)%data[day-1]))
        {
            printf("%d\n",i);
            printf("%d\n", (bread - data[day-2]*i)/data[day-1]);
            return 0;
        }
        if( i > (bread - data[day-2]*i)/data[day-1])
            return 0;
    }
    return 0;
}

