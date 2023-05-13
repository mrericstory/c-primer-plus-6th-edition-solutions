#include <stdio.h>

int main(void)
{
    int up, down;
    printf("Please enter the lower limit: ");
    scanf("%d", &down);
    printf("Now enter the upper limit: ");
    scanf("%d", &up);
    for (int i = down; i <= up; i++)
    {
        printf("%d\t%d\t%d", i, i * i, i * i * i);
        printf("\n");
    }
    return 0;
}