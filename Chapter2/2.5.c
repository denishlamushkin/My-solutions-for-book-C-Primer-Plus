#include <stdio.h>
void br(void);

void ic(void); 

int main(void)
{
    br();
    ic();
    ic();
    br();

    return 0;
}

void br()
{
    printf("Бразилия, Россия ");
}

void ic()
{
    printf("Индия, Китай\n");
}