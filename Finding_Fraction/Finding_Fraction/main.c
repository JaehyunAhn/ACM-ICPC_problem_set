#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int i,j, index=1;
    
    for(i=1; i<10000; i+=2)
    {
        for(j=1; j<=i; j++)
        {
            if(x == index)
            {
                printf("%d",j);
                index++;
                break;
            }
            index++;
        }
        for(j=i-1; j>=1; j--)
        {
            if(x == index)
            {
                printf("%d",j);
                index++;
                break;
            }
            index++;
        }
        if( x == index-1)
            break;
    }
    
    printf("/");
    
    index = 1;
    for(i=0; i<10000; i+=2)
    {
        for(j=1; j<=i; j++)
        {
            if(x == index)
            {
                printf("%d",j);
                index++;
                break;
            }
            index++;
        }
        for(j=i-1; j>=1; j--)
        {
            if(x == index)
            {
                printf("%d",j);
                index++;
                break;
            }
            index++;
        }
        if( x == index-1)
            break;
    }
    
    return 0;
}
