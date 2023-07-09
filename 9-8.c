#include <stdio.h>

#define UNDEFINED -1
#define POSITIVE 1
#define NEGATIVE 2

double power(double num, int p)
{
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

    double result = num;
    int state = POSITIVE;

    if (num < 0)
    {
        if (p % 2 != 0)
        {
            state = NEGATIVE;
            num = num * -1;
        }
    }

    for (int i = 1; i < p; i++)
    {
        result *= num;
    }

    if (state == NEGATIVE)
    {
        return result * -1;
    }
    else
    {
        return result;
    }
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
}