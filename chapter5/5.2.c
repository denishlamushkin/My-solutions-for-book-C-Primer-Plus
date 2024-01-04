#include <stdio.h>



int main(void)
{   
    int n = 0, z = 0;
    printf("Please enter number\n");
    scanf("%d", &n);
    while (z <=10)
    {
        printf("%d\n",n+z);
        z++;
    }


    return 0;
}