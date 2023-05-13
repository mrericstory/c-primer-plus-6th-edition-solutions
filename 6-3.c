#include <stdio.h>

int main(void)
{
    int ascii = 70;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", ascii);
            ascii--;
        }
        printf("\n");
        ascii = 70;
    }
    return 0;
}