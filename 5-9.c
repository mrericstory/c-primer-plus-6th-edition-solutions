#include <stdio.h>

double Temperatures_C(double f)
{
    double c;
    c = 5.0 / 9.0 * (f - 32.0);
    return c;
}

double Temperatures_K(double f)
{
    double k;
    k = (5.0 / 9.0 * (f - 32.0)) + 273.15;
    return k;
}

int main(void)
{
    double f, c, k;
    printf("Please enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    c = Temperatures_C(f);
    k = Temperatures_K(f);
    printf("This is your temperature in Celcius and Kelvin: %.2f˚C, %.2fK\n", c, k);
    return 0;
}