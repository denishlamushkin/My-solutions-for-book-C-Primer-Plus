#include <stdio.h>


int main(void)
{
    float height;
    char name[40];

    printf("Enter your name and height in cm.\n");
    scanf("%s %f", name, &height);

    printf("%s, your height is %.2fm\n", name, height / 100);
    return 0;
}
