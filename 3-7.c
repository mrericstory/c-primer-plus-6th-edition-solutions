#include <stdio.h>

int main(void)
{
    float hii, hic;
    printf("Please enter your height in inches: ");
    scanf("%f", &hii);
    hic = hii * 2.54;
    printf("Your height in centimeters (approximately): %6.2f\n", hic);
    return 0;
}