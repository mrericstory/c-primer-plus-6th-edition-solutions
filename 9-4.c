#include <stdio.h>

double harmonicMean(double a, double b)
{
    // double ia, ib;
    // ia = 1 / a;
    // ib = 1 / b;
    // double imean = (ia + ib) / 2;
    // double hmean = 1 / imean;
    // return hmean;

    return (2 * a * b) / (b + a);
}

int main(void)
{
    printf("%f\n", harmonicMean(2, 2));
    return 0;
}