#include <stdio.h>

int main(void)
{
    double num, limit, out1, out2;
    printf("Please enter upper limit (0 to quit): ");
    scanf("%lf", &limit);
    while (limit != 0.0)
    {
        for (double i = 1.0; i <= limit; i++)
            out1 += 1.0 / i;
        for (double i = 1.0; i <= limit; i += 2)
        {
            out2 += 1.0 / i;
            out2 -= 1.0 / (i + 1.0);
        }
        printf("These are the two outputs: %f, %f\n", out1, out2);
        printf("Please enter upper limit (0 to quit): ");
        scanf("%lf", &limit);
    }
}