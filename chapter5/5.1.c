#include <stdio.h>
#define MINUTES_PER_HOUR 60




int main(void)
{
    int min, hour,time_left;
    printf("Enter time in minutes\n");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min/MINUTES_PER_HOUR;
        time_left = min % MINUTES_PER_HOUR;
        printf("%d minutes is: %d hours %d minutes\n", min, hour,time_left);
        printf("Enter time in minutes\n");
        scanf("%d", &min);
    }

    return 0;
}