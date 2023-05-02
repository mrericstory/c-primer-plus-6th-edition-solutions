#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[20];
    printf("Please enter your first name here: ");
    scanf("%s", fname);
    printf("Welcome, \"%s\"\n", fname);
    printf("Welcome, \"%20s\"\n", fname);
    printf("Welcome, \"%-20s\"\n", fname);
    int length = strlen(fname) + 3;
    printf("Welcome, %*s\n", length, fname);
    return 0;
}