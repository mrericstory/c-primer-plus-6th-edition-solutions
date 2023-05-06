#include <stdio.h>

#define GTOL 3.785
#define MITOKM 1.609

int main(void)
{
    float gallons, miles, mpg, lphkm, liters, km;
    printf("How many gallons of oil did you use? ");
    scanf("%f", &gallons);
    printf("And how many miles did you travel with it? ");
    scanf("%f", &miles);
    mpg = miles / gallons;
    printf("Your miles/gallon value is as follows: %3.3f\n", mpg);
    liters = gallons * GTOL;
    km = miles * MITOKM;
    lphkm = (liters / km) * 100;
    printf("Your liters/100 kilometers is as follows: %3.3f\n", lphkm);
    return 0;
}