#include <stdio.h>
#include <stdlib.h>
int main()
{
    char number[13] = {'\0'};
    char match[10] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};
    scanf("%s",number);
    int i, j;
    for( i=0; i<= 9; i++)
    {
        for(j=0; j< strlen(number) ; j++)
        {
            if(number[j] == match[i])
                printf("%c",number[j]);
        }
    }
    
    return 0;
}