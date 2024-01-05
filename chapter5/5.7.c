#include <stdio.h>

void cube(double n); // template of function

int main(void)
{
    double number;
    printf("Enter number with floating number.\n");
    scanf("%lf", &number);
    cube(number);

    return 0;
}

void cube(double n) // function for calculating cube of number
{
    double n3;
    n3 = n*n*n;
    printf("Cube of %.2f is %.2f\n", n,n3);
}