#include <stdio.h>

int main(void)
{
    int friends = 5, weeks = 0;
    friends = (friends - (++weeks)) * 2;
    while (friends < 150)
        friends = (friends - (++weeks)) * 2;
    printf("After %d weeks the professor will know everyone!\n", weeks);
    return 0;
}