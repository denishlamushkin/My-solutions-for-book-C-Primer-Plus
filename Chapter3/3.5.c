#include <stdio.h>
// перевод возраста из лет в секунды
int main(void)
{
    double seconds = 3.156e7;
    float years;
    printf("Введите ваш возраст в годах: ");
    scanf("%f", &years);
    printf("Ваш возраст в секундах - %ef", years * seconds);


    return 0;
}