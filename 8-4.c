#include <stdio.h>

#define REST 2
#define INWORD 1
#define OUT 0

int main(void)
{
    int state = OUT, temp = 0, now = 0, asciij;
    float average = 0;
    printf("Start entering here --> ");
    while ((asciij = getchar()) != '#')
    {
        if (asciij >= 48 && asciij <= 57)
            state = INWORD;
        else if (asciij >= 65 && asciij <= 90)
            state = INWORD;
        else if (asciij >= 97 && asciij <= 122)
            state = INWORD;
        else
            state = OUT;
        if (state == INWORD)
            temp++;
        else if (state == OUT)
        {
            average += temp;
            now++;
            temp = 0;
            state = REST;
        }
    }
    if (state == INWORD && asciij == 35)
    {
        average += temp;
        now++;
        temp = 0;
        state = REST;
    }
    average /= now;
    printf("The average number of letters in words is: %0.2f\n", average);
    return 0;
}