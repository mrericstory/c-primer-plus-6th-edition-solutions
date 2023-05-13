#include <stdio.h>
#include <math.h>

float function(float f1, float f2)
{
    float dif = fabsf(f1 - f2);
    float prod = f1 * f2;
    float out = dif / prod;
    return out;
}

int main(void)
{
    float f1, f2, out;
    printf("Please enter a floating-point value (0 to exit): ");
    scanf("%f", &f1);
    printf("Please enter another floating-point value (0 to exit): ");
    scanf("%f", &f2);
    while (f1 != 0 && f2 != 0)
    {
        out = function(f1, f2);
        printf("Here is your output: %f\n", out);
        printf("Please enter a floating-point value (0 to exit): ");
        scanf("%f", &f1);
        printf("Please enter another floating-point value (0 to exit): ");
        scanf("%f", &f2);
    }
    return 0;
}