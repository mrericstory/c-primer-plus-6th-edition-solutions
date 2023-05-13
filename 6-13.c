#include <stdio.h>

int main(void)
{
    int squares[8];
    for (int i = 1; i < 9; i++)
    {
        squares[i - 1] = 1;
        for (int j = 0; j < i; j++)
            squares[i - 1] *= 2;
    }
    int i = 0;
    while (i < 8)
    {
        printf("%d\t", squares[i]);
        i++;
    }
    printf("\n");
    return 0;
}