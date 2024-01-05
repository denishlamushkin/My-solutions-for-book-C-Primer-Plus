#include <stdio.h>


int main(void)
{
    int count,sum;

    count = 0;
    sum = 0;
    int how_many;
    printf("Enter number of integers to sum\n");
    scanf("%d", &how_many);
    while (count++ < how_many)
    {
        sum = sum + count;
    }
    printf("sum=%d\n", sum);
    return 0;
}