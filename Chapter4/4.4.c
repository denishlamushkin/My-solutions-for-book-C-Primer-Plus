#include <stdio.h>


int main(void)
{
    float height;
    char name[40];

    printf("Введите свое имя и рост в см.\n");
    scanf("%s %f", name, &height);

    printf("%s, ваш рост составляет %.2fм\n", name, height / 100);
    return 0;
}