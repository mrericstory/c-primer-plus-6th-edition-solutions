#include <stdio.h>

int main(void)
{
    int guess, range = 100, ranget = 100;
    int status;
    printf("Please choose a number between 1 and 100.\n");
    printf("Are you ready?\n");
    printf("If I guess right, then you enter 1. If my guess was small, enter 0. Otherwise, enter 2.\n");
    guess = range / 2;
    range /= 2;
    printf("My guess is: %d\n", guess);
    scanf("%d", &status);
    while (status != 1)
    {
        if (status == 0)
        {
            guess += range / 2;
            range /= 2;
            printf("My guess is: %d\n", guess);
        }
        else if (status == 2)
        {
            guess -= range / 2;
            range /= 2;
            printf("My guess is: %d\n", guess);
        }
        else
            printf("You entered the wrong value!\n");
        scanf("%d", &status);
    }
    printf("Yay!\n");
    return 0;
}