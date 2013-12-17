
#include <stdio.h>

int main()
{

    // insert code here...
    unsigned long long int ans[100], field[100], n, m, o, i, j, temp, rem = 1, answer = 1;
    scanf("%llu %llu",&n , &m);
    o = n - m;
    if(o > m)
    {
        temp = m;
        m = o;
        o = temp;
    }
    for(i=0; i<100; i++)
    {
        ans[i] = 1;
        field[i] = i+1;
    }
    // initialize
    
    // level 1
    for (i=m; i<n; i++)
        ans[i] = field[i];
    
    // level 2
    for(i=1; i<=o; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ans[j]%i == 0)
            {
                ans[j] /= i;
                break;
            }
            else if( j == n-1 )
            {
                printf("[%llu] ",i);
                rem *= i;
            }
        }
    }
    
    // level 3
    for(i=0; i<n; i++)
        answer *= ans[i];
    answer %= rem;
    
    printf("%llu\n",answer);
    
    return 0;
}

