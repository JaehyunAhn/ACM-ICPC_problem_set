//
//  main.c
//  snail
//
//  Created by sonnet on 13. 2. 2..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{
    int sqre, index, dist;
    scanf("%d %d",&sqre, &index);
    // insert code here...
    int map[999][999], i, j, x, y;
    for(i = 0; i<sqre; i++)
        for(j = 0; j<sqre; j++)
            map[i][j] = 0;
    
    int numbering = sqre * sqre;
    for(i=0; i<sqre; i++)
        map[i][0] = numbering--;
    x = i-1; y = 0;
    dist = sqre-1;
    // 세로 넘버링 끝.
    
    // dist --; 하면서
    // 두 번씩 방향 바꾸면서
    // numbering --;
    int dir[2] = {0,1}; // 0 오위, 1 좌하
    while(dist)
    {
        //printf("%d\n",dist);
        switch (dir[dist%2]) {
            case 0:
                //printf("오위 %d\n",dist);
                // 오
                for(i=1; i<dist+1; i++)
                    map[x][y+i] = numbering--;
                y = y+i-1;
                
                // 위
                for(i=1; i<dist+1; i++)
                    map[x-i][y] = numbering--;
                x = x-i+1;
                break;
            case 1:
                //printf("좌하 %d\n",dist);
                // 좌
                for(i=1; i<dist+1; i++)
                    map[x][y-i] = numbering--;
                y = y-i+1;
                // 하
                for(i=1; i<dist+1; i++)
                    map[x+i][y] = numbering--;
                x = x+i-1;
                break;
        }
        dist--;
    }
    
    for(i=0; i<sqre; i++)
    {
        for(j=0; j<sqre; j++)
        {
            if(map[i][j] == index)
            {
                x = i; y = j;
            }
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n",x+1,y+1);
    
    return 0;
}

