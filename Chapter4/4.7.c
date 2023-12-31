#include <stdio.h>
#include <float.h>



int main(void)
{
    double bro = 1.0/3.0;
    float notBro = 1.0/3.0;
    printf("%.4f, %.4f\n", bro, notBro);
    printf("%.12f, %.12f\n", bro, notBro);
    printf("%.16f, %.16f\n", bro, notBro);
    printf("%d %d\n", FLT_DIG, DBL_DIG);


    return 0;
}