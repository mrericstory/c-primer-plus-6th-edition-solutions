#include <stdio.h>

#define BPR 10
#define OVERTIME 15
#define TAX300 0.15
#define TAX450 0.2
#define TAXMORE 0.25

int main(void)
{
    float gross, tax, net, time, overtime;
    printf("This code needs to know how long you worked to calculate your gross income, your tax, and your net income.\n");
    printf("These are our standards:\n");
    printf("You earn $10 per hour, and time and a half overtime.\n");
    printf("Taxes for first $300 are 15%%, for another $150 are 20%%, and for the rest 25%%.\n");
    printf("Please enter the hours you have worked here --> ");
    scanf("%f", &time);
    if (time > 40)
        overtime = time - 40;
    else
        overtime = 0;
    gross = time * BPR + overtime * OVERTIME;
    if (gross <= 300)
        tax = gross * TAX300;
    else if (gross > 300 && gross <= 450)
        tax = 300 * TAX300 + (gross - 300) * TAX450;
    else
        tax = 300 * TAX300 + 150 * TAX450 + (gross - 450) * TAXMORE;
    net = gross - tax;
    printf("You have earnt %0.2f in gross income. However, you had to pay %0.2f for tax, so your net income is %0.2f.\n", gross, tax, net);
}