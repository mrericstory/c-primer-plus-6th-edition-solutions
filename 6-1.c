#include <stdio.h>

int main(void)
{
    char letters[26];
    int counter = 0;
    for (int i = 97; i < 123; i++)
    {
        letters[counter] = i;
        counter++;
    }
    for (int j = 0; j < 26; j++)
        printf("%c\t", letters[j]);
    printf("\n");
    return 0;
}