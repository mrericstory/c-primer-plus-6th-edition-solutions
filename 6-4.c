#include <stdio.h>

int main(void)
{
    int ascii = 65;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", ascii);
            ascii++;
        }
        printf("\n");
    }
    return 0;
}