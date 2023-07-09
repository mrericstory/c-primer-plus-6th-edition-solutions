#include <stdio.h>

void larger_of(int *x, int *y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}

int main(void)
{
    int x = 2, y = 3;
    larger_of(&x, &y);
    printf("%d\t%d\n", x, y);
    return 0;
}