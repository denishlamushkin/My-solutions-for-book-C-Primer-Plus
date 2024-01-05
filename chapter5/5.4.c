#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12.0
int main(void)
{
    float cm,inches_left,inches;
    int foot;
    printf("Enter height in cm:");
    scanf("%f", &cm);
    while (cm > 0)
    {
        inches = cm / CM_PER_INCH;
        foot = inches / INCH_PER_FEET;
        inches_left =  inches - (foot * INCH_PER_FEET);
        printf("%.1f cm = %d foot, %.1f inches\n",cm,foot,inches_left);
        printf("Enter height in cm(0 for exit):");
        scanf("%f", &cm);

    }
    printf("Programm is closed.\n");

    return 0;
}