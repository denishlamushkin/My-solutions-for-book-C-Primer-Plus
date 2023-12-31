#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES); // цифры определяют ширину поля
    printf("*%2d*\n", PAGES);
    printf("*%15d*\n", PAGES);
    printf("*%-20d*\n", PAGES);
    return 0;
}