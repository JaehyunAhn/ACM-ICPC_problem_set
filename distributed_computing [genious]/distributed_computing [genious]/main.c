#include <stdio.h>

void main()
{
    int t[10][4]={{10},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}},
    i[10]={1,1,4,4,2,1,1,4,4,2},T,A,B;
    
    scanf("%d\n",&T);
    
    while(T--)
    {
        scanf("%d %d",&A,&B);
        printf("%d\n",t[A%10][B%i[A%10]]);
    }
}
