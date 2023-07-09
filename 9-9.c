#include <stdio.h>

#define UNDEFINED -1
#define POSITIVE 1
#define NEGATIVE 2

double power(double num, int p)
{
    double snum = num;
    if (num == 0)
    {
        if (p == 0)
        {
            return UNDEFINED;
        }
        else
        {
            return 0;
        }
    }
    if (p > 1)
    {
        num = num * power(snum, p - 1);
    }
    return num;
}

int main(void)
{
    double num, snum;
    int pow;
    printf("Please enter a number and to the ?th square (seperate using space) (q to quit): ");
    while ((scanf("%lf %d", &num, &pow)) == 2)
    {
        snum = power(num, pow);
        if (snum != UNDEFINED)
        {
            printf("%0.2lf to the %dth power is: %0.2lf\n", num, pow, snum);
        }
        else
        {
            printf("This is undefined.\n");
        }
        printf("Please enter a number and to the ?th square (seperate using space) (q to quit): ");
    }
    return 0;
}