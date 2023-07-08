#include <stdio.h>

int main(void)
{
    int asciij, capital = 0, lowercase = 0, others = 0;
    char chari;
    printf("Start entering here --> ");
    while ((chari = getchar()) != '#')
    {
        asciij = chari;
        if (asciij >= 65 && asciij <= 90)
            capital++;
        else if (asciij >= 97 && asciij <= 122)
            lowercase++;
        else
            others++;
    }
    printf("You entered:\n");
    printf("Capital letters: %d\nLowercase letters: %d\nOthers: %d\n", capital, lowercase, others);
    return 0;
}