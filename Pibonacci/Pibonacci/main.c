//
//  main.c
//  Fibonacci
//
//  Created by sonnet on 13. 1. 31..
//  Copyright (c) 2013년 Jaehyun Ahn. All rights reserved.
//

#include <stdio.h>
int cnt0 = 0;
int cnt1 = 0;
int Fibonacci(int n)
{
    if(n == 0)
    {
        cnt0++;
        return 0;
    }
    else if(n == 1)
    {
        cnt1++;
        return 1;
    }
    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(int argc, const char * argv[])
{

    int i,j;
    int arr[10000][2];
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        int input;
        scanf("%d",&input);
        Fibonacci(input);
        arr[i][0] = cnt0;
        arr[i][1] = cnt1;
        cnt0 = cnt1 = 0;
    }
    for(i=0;i<j;i++)
        printf("%d %d\n",arr[i][0],arr[i][1]);
}
