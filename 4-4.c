#include <stdio.h>

int main(void)
{
    char name[20];
    float hic;
    float him;
    printf("Please enter your name here: ");
    scanf("%s", name);
    printf("%s, please enter your height in centimeters here: ", name);
    scanf("%f", &hic);
    him = hic / 100;
    printf("%s, your height is %3.2f meters.\n", name, him);
    return 0;
}