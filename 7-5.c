#include <stdio.h>
#include <string.h>

#define DOUBLEEX 1
#define NODOUBLEEX 0

int main(void)
{
    int ccounter = 0, lcounter = 0, state;
    char input, changes[1000];
    printf("I correct.\nPlease enter (# to terminate) --> ");
    while ((input = getchar()) != '#')
    {
        switch (input)
        {
        case '.':
            input = '!';
            ccounter++;
            break;
        case '!':
            changes[lcounter++] = '!';
            changes[lcounter++] = '!';
            state = DOUBLEEX;
            ccounter++;
            break;
        }
        if (state == DOUBLEEX)
        {
            state = NODOUBLEEX;
        }
        else
        {
            changes[lcounter++] = input;
        }
    }
    for (int i = 0; i < strlen(changes); i++)
    {
        printf("%c", changes[i]);
    }
    printf("\nThat was your corrected ver, and I made %d changes. Thank me!\n", ccounter);
    return 0;
}