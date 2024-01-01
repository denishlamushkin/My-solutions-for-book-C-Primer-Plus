#include <stdio.h>
int main(void)
{
    float miles, gas;
    const float km_per_mile = 1.609;
    const float litre_per_gallon = 3.785;
    float km, litres;
    float km_per_litre;
    printf("Enter number of miles and number of gas (in gallons)\n");
    scanf("%f" "%f", &miles, &gas);
    printf("At one gallon of gas you passed %.1f miles\n", miles/gas);
    km = miles * km_per_mile;
    litres = gas * litre_per_gallon;
    km_per_litre = km/litres;
    printf("For EU users: at one litre of gas you passed %.1f km\n", km/litres);
    printf("For EU users: at 100 litres of gas you passed %.1f km\n", 100/km_per_litre);
}