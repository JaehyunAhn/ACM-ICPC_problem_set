#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    int result[10000];
    for(i=0; i<t; i++)
    {
        int input[2][3];
        scanf("%d %d %d %d %d %d",&input[0][0],&input[0][1],&input[0][2],
                                  &input[1][0],&input[1][1],&input[1][2]);
        
        int dist = (input[0][0]-input[1][0])*(input[0][0]-input[1][0])
                 + (input[0][1]-input[1][1])*(input[0][1]-input[1][1]);
        double dist_real = sqrt((double) dist);
        
        // 원 밖
        if( (dist_real > input[0][2]) && (dist_real > input[1][2]) )
        {
            if( dist_real == input[0][2] + input[1][2])
                result[i] = 1;
            else if( dist_real > input[0][2] + input[1][2])
                result[i] = 0;
            else
                result[i] = 2;
        }
        // 원 안
        else
        {
            double max, min;
            if( input[0][2] > input[1][2])
            {
                max = (int) input[0][2];
                min = (int) input[1][2];
            }
            else
            {
                max = (int) input[1][2];
                min = (int) input[0][2];
            }
            
            if(max == dist_real + min)
                result[i] = 1;
            else if( max > dist_real + min)
                result[i] = 0;
            else
                result[i] = 2;
            
            if(dist_real == 0)
            {
                if(max == min)
                    result[i] = -1;
                else
                    result[i] = 0;
            }
        }
        
    }
           
    for(i=0; i<t; i++)
        printf("%d\n",result[i]);
    
    return 0;
}