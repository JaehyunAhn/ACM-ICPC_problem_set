//
//  main.c
//  trianglespace2
//
//  Created by sonnet on 13. 2. 20..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

float make_point(float a, float b, float c, float d, float e, float f, float *point_x, float *point_y)
{
    // 삼각형이 만들어지지 않는 조건 1. 평행
    if( d*b == a*e )
        return 0;
    // 그게 아니면
    *point_y = -(d*c-a*f)/(d*b-a*e);
    *point_x = -(e*c-b*f)/(a*e-b*d);
    return 1;
}

int main()
{

    // insert code here...
    int t, j;
    float cases[10000][9], answer[10000] = {0,}, x1,y1,x2,y2,x3,y3;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%f %f %f %f %f %f %f %f %f",&cases[j][0],&cases[j][1],&cases[j][2],
                                           &cases[j][3],&cases[j][4],&cases[j][5],
                                           &cases[j][6],&cases[j][7],&cases[j][8]);
        if(make_point(cases[j][0],cases[j][1],cases[j][2],cases[j][3],cases[j][4],cases[j][5],&x1,&y1) == 0)
        {
            answer[j] = 0;
            continue;
        }
        if(make_point(cases[j][3],cases[j][4],cases[j][5],cases[j][6],cases[j][7],cases[j][8],&x2,&y2) == 0)
        {
            answer[j] = 0;
            continue;
        }
        if(make_point(cases[j][6],cases[j][7],cases[j][8],cases[j][0],cases[j][1],cases[j][2],&x3,&y3) == 0)
        {
            answer[j] = 0;
            continue;
        }
        answer[j] = 0.5*((x2*y1+x3*y2+x1*y3)-(x1*y2+x2*y3+x3*y1));
        if(answer[j] < 0)
            answer[j] = -answer[j];
    }
    
    for(j=0; j<t; j++)
        printf("%.4f\n",answer[j]);
    
    return 0;
}

