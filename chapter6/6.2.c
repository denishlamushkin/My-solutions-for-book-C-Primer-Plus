#include <stdio.h>


int main(void)
{
    int row, col, n;

    for (row = 0;row<5;row++)
    {
        for (col=0;col<=row;col++)
        {
            printf("$");
        }
        printf("\n");
    }


    return  0;
}