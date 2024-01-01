#include <stdio.h>
#include <string.h>


int main(void)
{
    char name[40];
    printf("Please, enter your name.\n");
    scanf("%s", name);
    int lenght =  strlen(name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n", lenght+3,name);




    return 0;
}
