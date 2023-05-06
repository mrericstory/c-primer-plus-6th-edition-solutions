#include <stdio.h>

#define HTOM 60

int main(void)
{
    int minute, hour;
    printf("Enter 0 to terminate.\n");
    printf("How many minutes? ");
    scanf("%d", &minute);
    while (minute > 0)
    {
        hour = minute / HTOM;
        minute = minute - (hour * HTOM);
        printf("This is your time in hours and minutes: %d hours, %d minutes.\n", hour, minute);
        printf("How many minutes? ");
        scanf("%d", &minute);
    }
    return 0;
}