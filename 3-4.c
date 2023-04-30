#include <stdio.h>

int main(void)
{
    float f;
    printf("Enter a floating-point value: ");
    scanf("%f", &f);
    printf("Fixed-point notation: %f\n", f);
    printf("Exponential notation: %e\n", f);
    printf("P notation: %a\n", f);
    return 0;
}