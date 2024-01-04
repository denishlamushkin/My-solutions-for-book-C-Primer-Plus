#include <stdio.h>


int main(void)
{
    int days,weeks,days_left;
    printf("Please enter how much you wanna days or type 0 if you want to exit.\n");
    scanf("%d", &days);
    while(days>0)
    {
        weeks = days / 7;
        days_left = days % 7;
        printf("%d days is %d weeks and %d days\n",days,weeks,days_left);
        printf("Please enter how much you wanna days or type 0 if you want to exit.\n");
        scanf("%d", &days);
    }

    return 0;
}