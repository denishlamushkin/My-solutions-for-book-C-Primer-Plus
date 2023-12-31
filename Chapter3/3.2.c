#include <stdio.h>

// здесь переведом значение в символ
int main(void)
{
    int ch;
    printf("Введите значение ASCII: ");
    scanf("%d", &ch);
    printf("Значение ASCII, которое вы ввели = %c", ch);


    return 0;
}