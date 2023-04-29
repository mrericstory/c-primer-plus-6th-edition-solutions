#include <stdio.h>

void smile(void)
{
    printf("Smile!");
}

int main(void)
{
    for (int i = 3; i > 0; i--)
    {
        int j = i;
        while (j != 0)
        {
            smile();
            j--;
        }
        printf("\n");
    }
    return 0;
}