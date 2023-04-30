#include <stdio.h>

int main(void)
{
    int i;
    printf("please enter an ASCII value: ");
    scanf("%d", &i);
    char c = i;
    printf("This is the character corresponding to your ASCII code: %c\n", c);
    return 0;
}