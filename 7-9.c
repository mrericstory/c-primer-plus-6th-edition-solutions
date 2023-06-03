#include <stdio.h>

#define ISPRIME 1
#define NOTPRIME 0

int main(void)
{
    int input, primes = 0, temp = 0, state = NOTPRIME, turn = ISPRIME;
    printf("Please enter a number (and I'll find the number of primes ≥ that number): ");
    scanf("%d", &input);
    if (input < 0)
    {
        printf("Bro get serious!\n");
        return 1;
    }
    while (++temp <= input)
    {
        for (int i = 2; i + 1 < temp; i++)
        {
            if (temp % i == 0)
            {
                turn = NOTPRIME;
                break;
            }
        }
        if (turn == NOTPRIME || temp == 1)
            turn = ISPRIME;
        else
            primes++;
    }
    printf("There are %d prime(s) smaller than or equal to the input.\n", primes);
    return 0;
}