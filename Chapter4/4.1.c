#include <stdio.h>


int main(void)
{
    char name[40];
    char lastName[30];


    printf("Enter your name and last name.\n");
    scanf("%s %s", name, lastName);
    printf("%s, %s\n", lastName, name);


    return 0;
}
