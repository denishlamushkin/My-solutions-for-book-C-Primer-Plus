#include <stdio.h>

void two(void); /*объвление функции*/

void one_three(void);


int main(void)
{
    printf("Начинаем:\n");
    one_three(); // вызываем функцию с функией внутри
    printf("порядок!");
    return 0;
}

void two()
{
    printf("два\n");
}

void one_three()
{
    printf("один\n");
    two(); /*вызоваем функию в другой функции*/
    printf("три\n");
}