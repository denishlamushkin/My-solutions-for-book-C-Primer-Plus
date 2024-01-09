#include <stdio.h>



int main(void)
{

    int row,col;
    char letter;
    for (row=0;row<6;row++)
    {
        letter='F';
        for (col=0;col<=row;col++)
        {
            printf("%c",letter--);
        }
        printf("\n");
    }


    return 0;
}