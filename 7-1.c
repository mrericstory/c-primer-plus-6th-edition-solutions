#include <stdio.h>
#include <string.h>

int main(void)
{
    int spaces, newlines, others;
    char input;
    spaces = newlines = others = 0;
    printf("I am a code that counts the number of spaces and new lines.\n");
    printf("Please enter an input (# to exit, | to stop entering): ");
    while (1)
    {
        while ((input = getchar()) != '|')
        {
            if (input == '#')
            {
                printf("Bye!\n");
                return 0;
            }
            else if (input == ' ')
                spaces++;
            else if (input == '\n')
                newlines++;
            else
                others++;
        }
        printf("Your input has %d spaces, %d new lines and %d others.\n", spaces, newlines, others);
        spaces = newlines = others = 0;
        printf("Please enter an input (# to exit, | to stop entering): ");
    }
}