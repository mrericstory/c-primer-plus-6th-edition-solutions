#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[20], lname[20];
    int fl, ll;
    printf("Please enter your first name: ");
    scanf("%s", fname);
    printf("Now enter your last name: ");
    scanf("%s", lname);
    fl = strlen(fname);
    ll = strlen(lname);
    printf("%s %s\n", fname, lname);
    for (int i = 0; i < fl - 1; i++)
    {
        printf(" ");
    }
    printf("%d ", fl);
    for (int j = 0; j < ll - 1; j++)
    {
        printf(" ");
    }
    printf("%d\n", ll);
    printf("%s %s\n", fname, lname);
    printf("%d", fl);
    for (int i = 0; i < fl; i++)
    {
        printf(" ");
    }
    printf("%d\n", ll);
    return 0;
}