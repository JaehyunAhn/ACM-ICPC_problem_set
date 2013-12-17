//
//  main.c
//  numberfinder3
//
//  Created by sonnet on 13. 2. 20..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int sorting(const void *al, const void *be)
{
    int a = *((int*)al);
    int b = *((int*)be);
    if(a>b)
        return 1;
    if(a<b)
        return -1;
    else
        return 0;
}

int binsearch(int *array, int search, int head, int tail)
{
    int mid = 0;
    while (tail >= head)
    {
        mid = (head + tail)/2;
        if( search > array[mid] )
            head = mid + 1;
        else if( search < array[mid])
            tail = mid - 1;
        else if( search == array[mid])
            return 1;
    }
    return 0;
}

int main()
{

    // insert code here...
    int i, in, out, ins[1000000], outp[1000000], t, j;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&in);
        for(i=0; i<in; i++)
            scanf("%d",&ins[i]);
        scanf("%d",&out);
        for(i=0; i<out; i++)
            scanf("%d",&outp[i]);
    
        qsort(ins, in, sizeof(int), sorting);
    
        // bin search
        for(i=0; i<out; i++)
            printf("%d\n",binsearch(ins,outp[i],0,in-1));
    }
    
    return 0;
}

