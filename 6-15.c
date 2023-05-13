#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[255];
    int i;
    printf("Enter a line of characters right there (Enter 0 at the end to stop)--> ");
    for (i = 0; i < 255; i++)
    {
        scanf("%c", &line[i]);
        if (line[i] == '0')
        {
            line[i] = '\0';
            break;
        }
    }
    for (int i = strlen(line) - 1; i >= 0; i--)
        printf("%c", line[i]);
    printf("\n");
    return 0;
}