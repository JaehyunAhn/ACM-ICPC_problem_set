#include <stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);
    
    int N[50][3];
    for( i=0;i<t; i++)
        scanf("%d", &N[i][0]);
    for( i=0;i<t; i++)
        scanf("%d", &N[i][1]);
    
    for( i=0;i<t; i++)
    {
        int index = 0;
        for( j=0;j<t;j++)
        {
            if( N[i][1] > N[j][1] )
                index++;
        }
        N[i][2] = index;
    }
    
    // sort
    for( i=1; i<t; i++)
    {
        for( j=i; j>0 && N[j][0] > N[j-1][0]; j--)
        {
            int temp = N[j][0];
            N[j][0] = N[j-1][0];
            N[j-1][0] = temp;
        }
    }
    
    // matching
    int temp[50];
    for( i=0; i<t; i++)
        temp[i] = N[i][0];
    
    for( i=0; i<t; i++)
    {
        for(j=0; j<t; j++)
        {
            if(i == N[j][2])
            {
                N[i][0] = temp[j];
            }
        }
    }
    
    for( i =0; i<t; i++)
        printf("%d ",N[i][2]);
    printf("\n");
    for( i =0; i<t; i++)
        printf("%d ",N[i][0]);
    printf("\n");
    
    return 0;
}