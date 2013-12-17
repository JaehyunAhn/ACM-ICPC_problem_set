//
//  main.c
//  Approximation
//
//  Created by sonnet on 10/6/13.
//  Copyright (c) 2013 Mad scientist. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float x0, dt, until;
    printf("input x0: ");
    scanf("%f",&x0);
    printf("input dt: ");
    scanf("%f",&dt);
    printf("input until: ");
    scanf("%f",&until);
    
    //In MATLAB/Python, approximate x(1) for x(0)=0.5 and x˙=−3x using Euler integration and dt=0.01.
    float result;
    int loop = (int)(until/dt);
    for(int i=0; i<=loop; i++)
    {
        result = x0 + dt * -2 * (dt * i);
        x0 = result;
        printf("temp result: %f\n",x0);
    }
    
    
    printf("\ninput %f %f %d\n",dt,until,loop);
    printf("result %f\n",result);
    return 0;
}

