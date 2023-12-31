#include <stdio.h>


int main(void)
{
    float number;
    printf("Введите значение с плавающей запятой: ");
    scanf("%f", &number);
    printf("Запись с фиксированной запятой: %lf\n", number); /*lf - long float*/
    printf("Экспондециальная форма записи: %e\n", number); 
    printf("Двоично-экспондециальное представление: %a\n", number);

    return 0;
}