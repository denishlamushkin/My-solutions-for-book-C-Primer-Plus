#include <stdio.h>


int main(void)
{
    int firstOperand, secondOperand; // variables
    printf("Enter an integer which will be second operand: ");
    scanf("%d", &secondOperand);
    printf("Now enter first operand: ");
    scanf("%d", &firstOperand);

    while (firstOperand > 0)
    {
        int result = firstOperand % secondOperand; // operation of finding module
        printf("%d %% %d = %d\n", firstOperand,secondOperand,result);
        printf("Now enter next first operand(for exit type 0): ");
        scanf("%d", &firstOperand);
    }

    printf("Done.\n"); // end of programm if user input is 0
    return 0;
}