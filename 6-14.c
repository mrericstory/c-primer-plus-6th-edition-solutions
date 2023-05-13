#include <stdio.h>

int main(void)
{
    int uarray[8], sarray[8];
    printf("Please enter 8 numbers below\n");
    for (int i = 0; i < 8; i++)
        scanf("%d", &uarray[i]);
    for (int i = 0; i < 8; i++)
    {
        sarray[i] = 0;
        for (int j = 0; j < i + 1; j++)
            sarray[i] += uarray[j];
        printf("%d\t", sarray[i]);
    }
    printf("\n");
    return 0;
}