#include <stdio.h>

int main()
{

    // insert code here...
    unsigned long long int n, i, object, array[10000];
    scanf("%llu %llu",&n, &object);
    for(i=0; i<n; i++)
        scanf("%llu",&array[i]);
    unsigned long long int temp = 0, temp_idx=0, count = 0;
    
    for(i=0; i<n; i++)
    {
        temp = 0;
        temp_idx = i;
        while( (temp <= object) && (temp_idx < n) )
        {
            temp += array[temp_idx];
            temp_idx++;
            
            if( temp == object)
                count++;
        }
    }
    
    printf("%llu",count);
    
    
    return 0;
}

