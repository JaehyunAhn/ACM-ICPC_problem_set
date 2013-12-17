#include <stdio.h>

int main()
{
    int t,a,d,n,ori;
    int cyc = 1;
    scanf("%d",&t);
    ori = t;
    a = t/10;
    d = t%10;
    
    n = (a+d)%10;
    t = d*10 + n;
    
    while(t != ori)
    {
        a = t/10;
        d = t%10;
        
        n = (a+d)%10;
        t = d*10 + n;
        cyc++;
    }
    printf("%d\n",cyc);
    return 0;
}

