#include <stdio.h>

int main(void)
{
    float numeber;
    printf("Enter number with floating number.\n");
    scanf("%f", &numeber);
    printf("You typerd number %.1f or %.1e\n", numeber, numeber);
    printf("Which is also %+.3f or %.3E\n", numeber,numeber);

    return 0;
}
