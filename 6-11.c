#include <stdio.h>

int main(void)
{
    int array[8];
    printf("Please enter eight numbers below\n");
    for (int i = 0; i < 8; i++)
        scanf("%d", &array[i]);
    for (int j = 7; j >= 0; j--)
        printf("%d\t", array[j]);
    printf("\n");
    return 0;
}