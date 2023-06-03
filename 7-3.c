#include <stdio.h>

// int main(void)
// {
//     int input, evens_n, evens_a, odds_n, odds_a;
//     evens_n = evens_a = odds_n = odds_a = 0;
//     printf("Enter 0 to terminate: ");
//     while ((input = getchar()) != 48)
//     {
//         if (input % 2 == 0)
//         {
//             printf("Got a Even : %d\n", input);
//             evens_n++;
//             evens_a += input;
//         }
//         else if (input % 2 == 1)
//         {
//             printf("Got a Odd : %d\n", input);
//             odds_n++;
//             odds_n += input;
//         }
//         else if (input < 48 || input > 57)
//         {
//         }
//     }
//     printf("You've entered %d even and %d odd integers, with %d and %d their means respectively.\n", evens_n, odds_n, evens_a / evens_n, odds_a / odds_n);
//     return 0;
// }

int main(void)
{
    int input_n, even_all, odd_all, even_c, odd_c, even_av, odd_av;
    even_all = 0, odd_all = 0, even_c = 0, odd_c = 0;

    printf("Enter numbers, each number ended withe 'Enter key', last one with '0':\n");
    while (scanf("%d", &input_n))
    {
        if (input_n == 0)
            break;
        else if (input_n % 2 == 0)
        {
            even_all += input_n;
            ++even_c;
        }
        else
        {
            odd_all += input_n;
            ++odd_c;
        }
    }

    even_av = even_all / even_c;
    odd_av = odd_all / odd_c;

    printf("Even number: %d\n", even_c);
    if (even_c > 0)
        printf("Even number average: %d\n", even_av);

    printf("Odd number: %d\n", odd_c);
    if (odd_c > 0)
        printf("Odd number average: %d\n", odd_av);

    return 0;
}