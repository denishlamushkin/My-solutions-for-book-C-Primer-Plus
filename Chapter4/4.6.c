#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char name[20], surname[20];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Enter your surname:\n");
    scanf("%s", surname);
    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", strlen(name)/2, strlen(name)/2, strlen(surname)/2, strlen(surname)/2);
    printf("%-*d %-*d\n", strlen(name)/2, strlen(name)/2, strlen(surname)/2, strlen(surname)/2);
}