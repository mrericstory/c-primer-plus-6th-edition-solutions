#include <stdio.h>

int main(void)
{
    int chars = 0;
    printf("Start entering here --> ");
    while (getchar() != '#')
        chars++;
    printf("You entered %d characters.\n", chars);
    return 0;
}