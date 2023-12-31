#include <stdio.h>

int main(void)
{
    float numeber;
    printf("Введите число с плавающей запятой.\n");
    scanf("%f", &numeber);
    printf("Вы ввели число %.1f или %.1e\n", numeber, numeber);
    printf("Что также является %+.3f или %.3E\n", numeber,numeber);

    return 0;
}