#include <stdio.h>
#include <ctype.h>

int strCheck(char s)
{
    if (isalpha(s))
    {
        int ascii = tolower(s) - 96;
        return ascii;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    char s;
    printf("Please enter sth (# to terminate)\n");
    while ((s = getchar()) != '#')
    {
        int check = strCheck(s);
        if (check == -1)
        {
            printf("%c is not in the alphabet.\n", s);
        }
        else
        {
            printf("%c is the %dth letter in the alphabet.\n", s, check);
        }
    }
    return 0;
}