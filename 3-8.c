#include <stdio.h>

float cup_to_pints(float cups)
{
    float pints = cups / 2.0;
    return pints;
}

float cup_to_tablespoons(float cups)
{
    float tablespoons = cups * 2.0;
    return tablespoons;
}

float cup_to_teaspoons(float cups)
{
    float teaspoons = cups * 2.0 * 3.0;
    return teaspoons;
}

int main(void)
{
    float cups, pints, tablespoons, teaspoons;
    printf("How many cups of water/salt/anything are there? ");
    scanf("%f", &cups);
    pints = cup_to_pints(cups);
    tablespoons = cup_to_tablespoons(cups);
    teaspoons = cup_to_teaspoons(cups);
    printf("This is your volume in pints: %f\n", pints);
    printf("This is your volume in tablespoons: %f\n", tablespoons);
    printf("This is your volume in teaspoons: %f\n", teaspoons);
    return 0;
}