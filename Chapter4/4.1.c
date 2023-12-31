#include <stdio.h>


int main(void)
{
    char name[40];
    char familia[30];


    printf("Введите свою имя и фамилию.\n");
    scanf("%s %s", name, familia);
    printf("%s, %s\n", familia, name);


    return 0;
}