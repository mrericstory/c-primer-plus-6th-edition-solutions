#include <stdio.h>

long factorial(int n)
{
    long ans;
    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }
    return ans;
}

long rfactorial(int n)
{
    long ans;
    if (n > 0)
    {
        ans = n * rfactorial(n - 1);
    }
    else
    {
        ans = 1;
    }
    return ans;
}

int main(void)
{
    int num;
    while ((scanf("%d", &num)) == 1)
    {
        printf("Loop: %d! = %ld\n", num, factorial(num));
        printf("Recursive: %d! = %ld\n", num, rfactorial(num));
    }
    return 0;
}