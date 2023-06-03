#include <stdio.h>

#define SINGLE17850 0.15
#define SINGLEMORE 0.28
#define HOH23900 0.15
#define HOHMORE 0.28
#define MARRIEDJ29750 0.15
#define MARRIEDJMORE 0.28
#define MARRIEDS14875 0.15
#define MARRIEDSMORE 0.28

int main(void)
{
    int person, ignore = 0;
    float income, tax;
    printf("This code calculates tax from 1988 in the US.\n");
    printf("Please enter your catagory:\n");
    printf("1) Single\n2) Head of Household\n3) Married, Joint\n4) Married, Seperated\n5) Quit\n");
    while ((scanf("%d", &person)))
    {
        if (person > 5 || person < 1)
        {
            printf("Please enter again.\n");
            ignore = 1;
        }
        if (person == 5)
        {
            printf("Bye!\n");
            return 1;
        }
        if (ignore == 0)
        {
            printf("Please enter your income: ");
            scanf("%f", &income);
            if (person == 1 && income <= 17850)
                tax = income * SINGLE17850;
            else if (person == 1 && income > 17850)
                tax = 17850 * SINGLE17850 + (income - 17850) * SINGLEMORE;
            else if (person == 2 && income <= 23900)
                tax = income * HOH23900;
            else if (person == 2 && income > 23900)
                tax = 23900 * HOH23900 + (income - 23900) * HOHMORE;
            else if (person == 3 && income <= 29750)
                tax = income * MARRIEDJ29750;
            else if (person == 3 && income > 29750)
                tax = 29750 * MARRIEDJ29750 + income * MARRIEDJMORE;
            else if (person == 4 && income < 14875)
                tax = income * MARRIEDS14875;
            else if (person == 4 && income > 14875)
                tax = 14875 * MARRIEDS14875 + (income - 14875) * MARRIEDSMORE;
            printf("Your tax was: %0.2f\n", tax);
        }
        else
        {
            printf("Couldn't calculate tax.\n");
            ignore = 0;
        }
        printf("Please enter your catagory:\n");
        printf("1) Single\n2) Head of Household\n3) Married, Joint\n4) Married, Seperated\n5) Quit\n");
    }
}