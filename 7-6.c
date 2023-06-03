#include <stdio.h>
#include <string.h>

#define YES 2
#define NO 0
#define POSSIBLE 1

int main(void)
{
    int times = 0, edetector = NO, idetector = NO, refresh = 0, refreshstate = 0;
    char input;
    printf("This code will read the times the phrase \'ei\' appears.\n");
    printf("Please input anything you like (enter # to terminate): ");
    while ((input = getchar()) != '#')
    {
        if (refreshstate == 1)
        {
            refresh++;
            refreshstate = 0;
        }
        if (input == 'e')
        {
            edetector = POSSIBLE;
            refresh++;
            refreshstate = 1;
        }
        else if (input == 'i')
        {
            if (edetector == POSSIBLE)
            {
                idetector = YES;
                times++;
                idetector = NO;
            }
        }
        if (refresh > 1 && input != 'e')
        {
            edetector = 0;
            refresh = 0;
        }
    }
    printf("I have detedted %d \'ei\'s.\n", times);
    return 0;
}