#include <stdio.h>


int main(void)
{

    int row,col;
    char letter = 'A';
    for(row=0;row<6;row++)
    {
        for (col=0;col<=row;col++)
        {
            printf("%c", letter++);
        }
        printf("\n");
    }
    return 0;
}