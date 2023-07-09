#include <stdio.h>

double min(int a, int b) { return a < b ? a : b; }

int main(void)
{
    double a = 2, b = 3;
    printf("%f\n", min(a, b));
    return 0;
}