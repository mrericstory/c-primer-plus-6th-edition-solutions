#include <stdio.h>

int main(void)
{
    float account = 1000000.0, take = 100000.0, rate = 1.08;
    int time = 0;
    account *= rate;
    account -= take;
    time++;
    while (account > 0)
    {
        account *= rate;
        account -= take;
        time++;
    }
    printf("It takes %d years for Charlie Lucky to empty his account.\n", time);
    return 0;
}