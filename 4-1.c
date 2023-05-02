#include <stdio.h>

int main(void)
{
    char first[20], last[20];
    printf("Please enter you first name here: ");
    scanf("%s", first);
    printf("%s, now please enter your last name: ", first);
    scanf("%s", last);
    printf("Welcome to the code, %s, %s.\n", last, first);
    return 0;
}