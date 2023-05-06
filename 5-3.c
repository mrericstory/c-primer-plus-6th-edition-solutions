#include <stdio.h>

int main(void)
{
    int days, weeks;
    printf("Enter 0 to terminate.\n");
    printf("Please enter the number of days: ");
    scanf("%d", &days);
    while (days > 0)
    {
        weeks = days / 7;
        days = days - (weeks * 7);
        printf("Here is your time in weeks and days: %d weeks, %d days\n", weeks, days);
        printf("Please enter the number of days: ");
        scanf("%d", &days);
    }
    return 0;
}