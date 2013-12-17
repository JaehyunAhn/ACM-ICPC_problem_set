#include <stdio.h>

int main()
{
    int n, i;
    float subject[1000] = {0,}, max = 0, sum =0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&subject[i]);
        if(subject[i] >= max)
            max = subject[i];
    }
    
    for(i=0; i<n; i++)
    {
        subject[i] = subject[i]/max*100;
        sum += subject[i];
    }
    
    printf("%.2f",sum/n);
    
    
    return 0;
}

