#include <stdio.h>

void chline(char ch, int i, int j)
{
    for (int ii = 0; ii < i; ii++)
    {
        for (int jj = 0; jj < j; jj++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}

int main(void)
{
    chline('c', 2, 2);
}