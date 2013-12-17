//
//  main.c
//  La little princess : 프린스는 게이니까 프린세스가 좋아.
//
//  Created by sonnet on 13. 1. 31..
//  Copyright (c) 2013년 Jaehyun Ahn. All rights reserved.
//

#include <stdio.h>
#include <math.h>
// 출발하고 도착할 때 원 안에 있는 경우의 수를 계산해야 한다.
int main()
{

    // insert code here...
    int T,i,j;
    int answer[10000];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        int start[2], end[2];
        scanf("%d %d %d %d", &start[0], &start[1], &end[0], &end[1]);
        int planet;
        scanf("%d",&planet);
        int n[50][3];
        int count = 0;
        for(j=0; j<planet;j++)
        {
            scanf("%d %d %d",&n[j][0], &n[j][1], &n[j][2]);
            double distance = 0;
            int flag = 0;
            distance = sqrt( ((double)start[0] - (double)n[j][0])*((double)start[0] - (double)n[j][0]) +
                             ((double)start[1] - (double)n[j][1])*((double)start[1] - (double)n[j][1]) );
            if(distance < n[j][2])
                flag++;
            distance = sqrt( ((double)end[0] - (double)n[j][0])*((double)end[0] - (double)n[j][0]) +
                            ((double)end[1] - (double)n[j][1])*((double)end[1] - (double)n[j][1]) );
            if(distance < n[j][2])
                flag++;
            if (flag == 1)
                count++;
        }
        answer[i] = count;
    }
    
    for(i=0; i<T; i++)
        printf("%d\n",answer[i]);
    
    
    return 0;
}

