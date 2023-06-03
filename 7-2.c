#include <stdio.h>

int main(void)
{
    int ascii, ascii_coding, line, linec;
    char input;
    ascii_coding = 2, line = 1, linec = 0;
    printf("I am a code that gives ASCII codes and codes lines.\n");
    printf("Please enter an input (# to exit, | to stop entering): ");
    while (1)
    {
        while ((input = getchar()) != '|')
        {
            if (input == '#')
                return 0;
            linec++;
            if (input != '\n')
            {
                printf("%d, ", ascii = input);
                printf(" Coded: %c | ", ascii += ascii_coding);
                if (linec == 8)
                {
                    printf("\n");
                    linec = 0;
                }
            }
            else
            {
                printf("\n");
            }
        }
        printf("\nPlease enter an input (# to exit, | to stop entering): ");
    }
    return 0;
}