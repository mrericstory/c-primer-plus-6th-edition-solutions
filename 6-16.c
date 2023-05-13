#include <stdio.h>

int main(void)
{
    int time = 0;
    float dar = 10, der = 1.05, da = 100.0, de = 100.0;
    da += dar;
    de = de * der;
    time++;
    while (da > de)
    {
        da += dar;
        de = de * der;
        time++;
    }
    printf("It takes %d years for Daphne\'s investment to be smaller than Deirdre\'s investment.\n", time);
    return 0;
}