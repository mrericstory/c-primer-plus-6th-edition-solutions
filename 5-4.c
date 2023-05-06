#include <stdio.h>

#define CMTOFT 30.48
#define CMTOIN 2.54

int main(void)
{
    float cm, in;
    int ft;
    printf("Enter your height in centimeters (<= 0 to terminate): ");
    scanf("%f", &cm);
    while (cm > 0)
    {
        ft = cm / CMTOFT;
        in = (cm - (ft * CMTOFT)) / CMTOIN;
        printf("You're %d\'\'%1.1f\' tall.\n", ft, in);
        printf("Enter your height in centimeters (<= 0 to terminate): ");
        scanf("%f", &cm);
    }
    printf("bye\n");
    return 0;
}