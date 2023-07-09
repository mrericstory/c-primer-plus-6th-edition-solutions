#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void larger_of(double *a, double *b, double *c)
{
    if (*a > *b)
    {
        swap(a, b);
    }
    if (*b > *c)
    {
        swap(b, c);
        if (*a > *b)
        {
            swap(a, b);
        }
    }
}

int main(void)
{
    double a, b, c;
    printf("Enter 3 numbers (use space to seperate) (q to quit): ");
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
    {
        larger_of(&a, &b, &c);
        printf("Rearranged nums: %0.2lf, %0.2lf, %0.2lf\n", a, b, c);
        printf("Enter 3 numbers (use space to seperate) (q to quit): ");
    }
    return 0;
}