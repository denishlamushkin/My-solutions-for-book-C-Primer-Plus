#include <stdio.h>
// когда должен ыт указан сивол &
int main(void)
{
    int age; // переменная
    float assets; // переменная
    char pet[30]; // строка

    printf("Введите ифнормацию о вощрасте, сумме в банке и вашем любимом животном.\n");
    scanf("%d %f", &age, &assets); // здесь должен быть указан символ &
    scanf("%s", pet); // здесь не должен быть указан символ &
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;

}