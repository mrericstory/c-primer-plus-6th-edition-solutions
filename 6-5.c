#include <stdio.h>

int main(void)
{
    char letter;
    int ascii;
    printf("Hello there! Please enter a random uppercase letter here --> ");
    scanf("%c", &letter);
    ascii = letter;
    for (int i = 9; i >= 1; i -= 2)
    {
        for (int j = i / 2; j > 0; j--)
            printf(" ");
        for (int n = 10; n > i; n--)
            if (n - i == 1)
                printf("%c", ascii);
            else
            {
                int before = (n - i) / 2 + 1;
                int after = (n - i) / 2;
                for (int m = 0; m < before; m++)
                {
                    printf("%c", ascii);
                    ascii++;
                }
                ascii -= 2;
                for (int m = 0; m < after; m++)
                {
                    printf("%c", ascii);
                    ascii--;
                }
                break;
            }
        for (int j = i / 2; j > 0; j--)
            printf(" ");
        ascii = letter;
        printf("\n");
    }
    return 0;
}