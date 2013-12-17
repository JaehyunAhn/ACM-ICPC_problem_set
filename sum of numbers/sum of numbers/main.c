#include <stdio.h>

int main()
{
    unsigned long long test,i = 1;
    scanf("%llu",&test);
    
    while( i*(i+1)/2 <= test )
        i++;
    printf("%llu\n",i-1);
    return 0;
}