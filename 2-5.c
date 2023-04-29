#include <stdio.h>

void br(void)
{
    printf("Brazil, Russia, ");
}

void ic(void)
{
    printf("India, China, ");
}

int main(void)
{
    br();
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();
    printf("\n");
    return 0;
}