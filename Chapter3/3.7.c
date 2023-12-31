#include <stdio.h>
// калькулятор из дюймов в сантиметры

int main(void)
{
    float duimy;
    float cm;
    printf("Введите ваш рост в дюймах: ");
    scanf("%f\n", &duimy);
    printf("Ваш рост в сантиметрах: %.2f", duimy * 2.54);

    return 0;

}