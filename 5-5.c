#include <stdio.h>

int main(void)
{
    int onetowhat, counter = 0;
    printf("<code>: Add from 1 to __\b\b");
    scanf("%d", &onetowhat);
    for (int i = 1; i <= onetowhat; i++)
        counter += i;
    printf("<code>: This is the sum of the numbers from 1 to %d: %d\n", onetowhat, counter);
    return 0;
}