#include <stdio.h>
#include <string.h>

char get_first(char *input)
{
    if (strlen(input) == 0)
    {
        return "";
    }

    char firstChar;
    int found = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        switch (input[i])
        {
        case ' ':
        case '\n':
        case '\t':
        case '\r':
        case '\f':
        case '\v':
            break;
        default:
        {
            firstChar = input[i];
            found = 1;
            break;
        }
        }
        if (found == 1)
        {
            break;
        }
    }

    return firstChar;
}

int main(void)
{
    char *input;
    printf("Please enter something (# to terminate):\n");
    scanf("%s", input);

    char first = get_first(input);

    printf("The first non-whitespace character is: %c\n", first);

    return 0;
}