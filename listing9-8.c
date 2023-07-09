#include <stdio.h>

void toBin(unsigned long num)
{
    int r;
    r = num % 2;
    if (num / 2 >= 1)
    {
        toBin(num / 2);
    }
    putchar(r == 0 ? '0' : '1');
}

int main(void)
{
    int num;
    printf("Enter a number\n");
    while ((scanf("%d", &num)) == 1)
    {
        printf("Binary equivalant: ");
        toBin(num);
        putchar('\n');
        printf("Enter a number\n");
    }
    return 0;
}