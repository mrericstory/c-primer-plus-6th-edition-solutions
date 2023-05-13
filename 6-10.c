#include <stdio.h>
#include <math.h>

int main(void)
{
    double lower, upper, issquare, squaresum;
    squaresum = 0;
    printf("Please enter lower limits (0 to quit): ");
    scanf("%lf", &lower);
    printf("Please enter upper limits (0 to quit): ");
    scanf("%lf", &upper);
    while (upper != 0 && lower != 0)
    {
        for (int i = lower * lower; i <= upper * upper; i++)
        {
            issquare = sqrt(i);
            if (issquare - (int)issquare != 0)
            {
            }
            else
                squaresum += issquare * issquare;
        }
        printf("The sum of all squares from %0.0f to %0.0f is %0.0f.\n", lower, upper, squaresum);
        squaresum = 0;
        printf("Please enter lower limits (0 to quit): ");
        scanf("%lf", &lower);
        printf("Please enter upper limits (0 to quit): ");
        scanf("%lf", &upper);
    }
}