#include <stdio.h>

int main()
{
    int sticks[7] = {1,2,4,8,16,32,64};
    int stocks[7] = {0,0,0,0, 0, 0, 1};
    int find, i, sum, remember;
    scanf("%d",&find);
    
    sum = sticks[6]*stocks[6]; // 초기조건 64
   /* for(i=0; i<7; i++)
    {
        if(find == sticks[i])
        {
            printf("0\n");
            return 0;
        }
    }*/
    if( sum == find)
        printf("1\n");
        
    while( sum > find )
    {
        for(i=0; i<7; i++)
        {
            if(stocks[i] != 0 && i != 0)
            {
                stocks[i]   -= 1;
                stocks[i-1] += 2;
                remember = i-1;
                //printf("remember:%d ",remember);
                break;
            }
            else if(stocks[i] != 0 && i == 0)
            {
                printf("-1\n");
                return -1;
            }
        }// 부러뜨린다
        
        sum = 0;
        for(i=0; i<7; i++)
            sum = sum + stocks[i]*sticks[i];
        sum = sum - sticks[remember]; // 부러뜨린거 하나 제외
        //printf("sum:%d ",sum);
        
        if(sum > find)
        {
            stocks[remember] -= 1;
        }
        else if( sum < find)
        {
            //printf("stay ");
        }
        else
        {
            //printf("1\n");
            int stuck=0;
            for(i=0; i<7; i++)
                stuck+= stocks[i];
            printf("%d\n",stuck-1);
            break;
        }
        sum = 0;
        for(i=0; i<7; i++)
            sum = sum + stocks[i]*sticks[i];
        //printf("final_sum:%d\n",sum);

    }
    
    return 0;
}