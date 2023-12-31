#include <stdio.h>

void smile(void); /*объявление функции*/

int main(void)
{
    smile(); 
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();

    return 0;
}


void smile()
{
    printf("Улыбайся!");
}