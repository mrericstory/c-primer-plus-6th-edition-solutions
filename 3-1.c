#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("%d\n", INT_MAX);
    int i = INT_MAX;
    i++;
    printf("Overflowed i: %d\n", i);
    printf("%f\n", FLT_MAX);
    float f = FLT_MAX;
    f += 1;
    printf("Overflowed f: %f\n", f);
    printf("%f\n", FLT_MIN);
    float fs = FLT_MIN;
    fs -= (FLT_MAX + 1);
    printf("Underflowed fs: %f\n", fs);
    return 0;
}