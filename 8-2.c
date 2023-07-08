#include <stdio.h>

int main(void)
{
    int ascii, linec = 0;
    char chari;
    printf("Start entering here --> ");
    while ((chari = getchar()) != '#')
    {
        ascii = chari;
        if (chari == '\n')
        {
            printf("Character: \'\\n\', Represented as: \'\\n\'\t");
            linec++;
        }
        else if (chari == '\t')
        {
            printf("Character: \'\\t\', Represented as: \'\\t\'\t");
            linec++;
        }
        else
        {
            printf("Character: %c | Ascii value: %d\t", chari, ascii);
            linec++;
        }
        if (linec == 10)
        {
            printf("\n");
            linec = 0;
        }
    }
    printf("Done!\n");
    return 0;
}