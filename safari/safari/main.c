#include <stdio.h>

int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    c=a-b;
    if(c<0)
        printf("%lld",-c);
    else
        printf("%lld",c);
    return 0;
}

//2,000,000,000