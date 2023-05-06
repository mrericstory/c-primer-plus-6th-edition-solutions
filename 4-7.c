#include <stdio.h>
#include <float.h>

int main(void)
{
    double df = 1.0 / 3.0;
    float f = 1.0 / 3.0;
    printf("df: %4.4f, f: %4.4f\n", df, f);
    printf("df: %12.12f, f: %12.12f\n", df, f);
    printf("df: %16.16f, f: %16.16f\n", df, f);
    printf("This is the limit of df:%d, and this is the limit of f:%d\n", DBL_DIG, FLT_DIG);
    return 0;
}