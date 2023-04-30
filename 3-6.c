#include <stdio.h>

int main(void)
{
    float mow = 3.0e-23, aow, mlow;
    printf("Enter the amount of water in quarts: ");
    scanf("%f", &aow);
    mlow = (aow * 950) / mow;
    printf("This is how many molecules of water there are in %3.1f quarts of water: %e\n", aow, mlow);
    return 0;
}