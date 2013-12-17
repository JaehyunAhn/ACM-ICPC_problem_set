#include <stdio.h>
#include <stdlib.h>
int main()
{

    // insert code here...
    int n, m, i, j, count = 0;
    // priority    8, 5, 4, 9, 1, 7, 6, 3, 2, 0
    int pri[10] = { 8, 5, 4, 9, 1, 7, 6, 3, 2, 0 };
    scanf("%d %d", &n, &m);
    if( n > m )
    {
        int temp = n;
        n = m;
        m = temp;
    }
    int ten, onn, tem, onm;
    ten = n/10; onn = n%10; tem = m/10; onm = m%10;
    
    // for 문 돌면서, priority대로 sorting & print
    // 십의자리 안에 14 29면
    // 18 15 14 19 17 16
    int sorting_box[100000] = { 0, };
    int k =0;
//    printf("%d ",pri[0]);
    sorting_box[count++] = pri[0];
    for( i =0; i<10; i++)
    {
        if( (pri[i] >= ten) && (pri[i] <= tem) && (pri[i] != 0) )
        {
            while( pri[k] != pri[i])
            //    printf("%d ",pri[++k]);
                sorting_box[count++] = pri[++k];
                
            for(j=0; j<10; j++)
            //    printf("%d%d ", pri[i], pri[j]);
                sorting_box[count++] = 10*pri[i] + pri[j];
        }
    }
    while (k != 8)
    //    printf("%d ",pri[++k]);
        sorting_box[count++] = pri[++k];
    
    int jump = 0;
    for(i=0; i<100000; i++)
    {
        if( sorting_box[i] >= n && sorting_box[i] <= m)
        {
            jump ++;
            printf("%d ",sorting_box[i]);
            if(jump%10 == 0)
                printf("\n");
        }
    }
    return 0;
}

