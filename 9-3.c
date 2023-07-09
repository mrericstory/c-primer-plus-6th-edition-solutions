#include <stdio.h>

void printc(char ch, int i, int j)
{
    for (int jj = 0; jj < j; jj++)
    {
        for (int ii = 0; ii < i; ii++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}

int main(void)
{
    printc('c', 3, 2);
}