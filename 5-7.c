#include <stdio.h>

int main(void)
{
    double blablabla;
    printf("Please enter a number and I'm gonna cube it: ");
    scanf("%lf", &blablabla);
    printf("This is your number cubed: %lf\n", blablabla * blablabla * blablabla);
    return 0;
}