#include <stdio.h>

void Temperatures(double n);


int main(void)
{
    double farenheit; // this will need to be passed to void Temperatures()
    printf("Enter your temperature in farenheit or type any symbol to exit: ");
    while (scanf("%lf", &farenheit) == 1) // checking if user typed number and not something else
    {

        Temperatures(farenheit);
        printf("Enter your temperature in farenheit or type any symbol to exit: ");
    }

    return 0;
}


void Temperatures(double n) // body of function
{
    // n - temperature in farenheit
    const double five = 5.0;
    const double nine = 9.0;
    const double thirtyTwo = 32.0;
    
    double celsius = five / nine * (n - thirtyTwo); 
    double kelvin = celsius + 273.16; // temperature in Kelvin
    printf("Temperature in Celsius: %.2fС. Temperature in kelvin: %.2fK.\n", celsius,kelvin);


}