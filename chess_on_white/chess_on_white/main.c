//
//  main.c
//  chess_on_white
//
//  Created by sonnet on 13. 2. 13..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#include <stdio.h>

int main()
{

    // insert code here...
    char board[8][8] = {'\0',};
    
    int i, j, count = 0;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
            scanf(" %c", &board[i][j]);
        
        if( i%2 == 0)
        {
            for(j=0; j<8; j++)
                if( j%2 == 0 && board[i][j] == 'F')
                    count++;
        }
        else
        {
            for(j=0; j<8; j++)
                if( j%2 == 1 && board[i][j] == 'F')
                    count++;
        }
    }
    
    printf("%d\n",count);
    

    return 0;
}

