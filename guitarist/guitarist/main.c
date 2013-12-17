//
//  main.c
//  guitarist
//
//  Created by sonnet on 13. 2. 20..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    int n, m, i, stringLst[50][2], each_min =2000, package_min = 2000, price = 0;
    scanf("%d %d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&stringLst[i][0], &stringLst[i][1]);
        if(stringLst[i][0] < package_min)
            package_min = stringLst[i][0];
        if(stringLst[i][1] < each_min)
            each_min = stringLst[i][1];
    }
    
    //printf("%d %d\n",each_min,package_min);
    if( each_min*6 <= package_min )
        printf("%d\n",each_min*n);
    else if( each_min*(n%6) >= package_min)// 4개 15 4일 경우, 15가 아닌 16 출력함.
    {// 무조건 패키지가 더 쌈?
        price = (n/6)*package_min;
        price += package_min;
        printf("%d\n",price);
    }
    else
    {
        price = (n/6)*package_min;
        price = price + (n%6)*each_min;
        printf("%d\n",price);
    }
    return 0;
}

