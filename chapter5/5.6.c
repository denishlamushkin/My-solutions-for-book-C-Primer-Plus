#include <stdio.h>


int main(void)
{
    int count,sum;

    count = 0;
    sum = 0;
    int how_many;
    printf("Enter number of squares to sum\n");
    scanf("%d", &how_many);
    while (count++ < how_many)
    {
        sum = (count*count+sum);
    }
    printf("%d\n", sum);
    return 0;
}