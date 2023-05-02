#include <stdio.h>

int main(void)
{
    float f;
    printf("Please enter a floating-point value: ");
    scanf("%f", &f);
    printf("The input is %4.1f or %4.1e.\n", f, f);
    printf("Please enter a floating-point value: ");
    scanf("%f", &f);
    printf("The input is %+6.3f or %6.3E.\n", f, f);
    return 0;
}