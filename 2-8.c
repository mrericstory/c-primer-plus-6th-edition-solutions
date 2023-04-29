#include <stdio.h>

void two(void)
{
    printf("Two!\n");
}

void one_three(void)
{
    printf("Three!\n");
    two();
    printf("One!\n");
}

int main(void)
{
    printf("Starting now!\n");
    one_three();
    printf("Done!\n");
    return 0;
}