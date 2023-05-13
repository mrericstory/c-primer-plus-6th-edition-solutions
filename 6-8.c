#include <stdio.h>
#include <math.h>

int main(void)
{
    float f1, f2, dif, prod, out;
    printf("Please enter a floating-point value (0 to exit): ");
    scanf("%f", &f1);
    printf("Please enter another floating-point value (0 to exit): ");
    scanf("%f", &f2);
    while (f1 != 0 && f2 != 0)
    {
        dif = fabsf(f1 - f2);
        prod = f1 * f2;
        out = dif / prod;
        printf("Here is your output: %f\n", out);
        printf("Please enter a floating-point value (0 to exit): ");
        scanf("%f", &f1);
        printf("Please enter another floating-point value (0 to exit): ");
        scanf("%f", &f2);
    }
    return 0;
}