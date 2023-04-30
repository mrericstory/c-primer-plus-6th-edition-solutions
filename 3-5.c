#include <stdio.h>

int main(void)
{
    int age;
    long int ais;
    printf("Please enter your age here: ");
    scanf("%d", &age);
    ais = age * 31560000;
    printf("This is your age in seconds: %ld\n", ais);
    return 0;
}