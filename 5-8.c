#include <stdio.h>

int main(void)
{
    int first, second;
    printf("Please enter the second operand of a modulus equation: ");
    scanf("%d", &second);
    printf("Now enter the first one (<= 0 to terminate): ");
    scanf("%d", &first);
    while (first > 0)
    {
        printf("%d %% %d is %d\n", first, second, first % second);
        printf("Now enter the first one (<= 0 to terminate): ");
        scanf("%d", &first);
    }
    printf("bye\n");
    return 0;
}