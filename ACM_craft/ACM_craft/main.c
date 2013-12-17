//
//  main.c
//  ACM_craft
//
//  Created by sonnet on 13. 1. 31..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//
// 가장 긴 막대길이 구하는데 서로 연관이 있는 경우의 문제로 치환 가능?

#include <stdio.h>

int main()
{

    // insert code here...
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int N,K;
        scanf("%d %d",&N,&K);
        
        //building[n개의 건물][relationship]
        int building[1000][2];
        int j = 0;
        for(j=0;j<1000;j++)
        {
            building[j][0] = -1;
            building[j][1] = 0;
        }
        for(j=0;j<N;j++)
            scanf("%d",&building[j][0]);
        
        // priority
        int priority[1000][2];
        for(j=0;j<1000;j++)
            priority[j][0] = -1;
        for(j=0;j<K;j++)
        {
            scanf("%d %d",&priority[j][0], &priority[j][1]);
            building[ priority[j][1]-1 ][1]++; // 갈 수 있는 경로의 수
           // printf("[%d] count %d -> %d\n",j,building[j][0],building[j][1]);
        }
        
        // aim
        int aim;
        scanf("%d",&aim);
        aim -= 1;
        
        // 입력 종료, 계산 시작
        while(building[aim][1] != 0)
        {
            int compare = 0;
            int index = aim;
            
            while(index != 0)
            {// 1번 건물을 지을 수 있을 때 까지.
                building[index][1]--;
                compare += building[index][0];
                for(j=0;j<K;j++)
                {
                    if (priority[j][1] == index+1)
                    {
                        printf("%d <- %d [idx:%d]\n",priority[j][0],priority[j][1],index);
                        if (building[ priority[j][0]-1 ][1] != 0)
                        {
                            index = priority[j][0];
                            printf("idx: %d\n",index);
                        }
                    }
                }
                printf("%d\n",compare);
            }
            building[aim][1] = 0;
            printf("ed\n");
        }
    }
    
    
    return 0;
}

