
#include <stdio.h>

int main()
{
    // insert code here...
    // 1억당 1초
    // 10,000,000,000 100억.
    // O(n^2)   == 100초
    // O(nlogn) == 1초
    int n, m, n_input[100000], m_input[100000], i, j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&n_input[i]);
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&m_input[i]);
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if( m_input[i] == n_input[j])
            {
                printf("1\n");
                break;
            }
            else if(j == n-1)
            {
                printf("0\n");
            }
        }
    }
    
    return 0;
}