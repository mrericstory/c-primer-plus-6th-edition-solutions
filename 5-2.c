#include <stdio.h>

int main(void)
{
    int input;
    printf("Please enter an integer here: ");
    scanf("%d", &input);
    for (int i = input; i <= input + 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}