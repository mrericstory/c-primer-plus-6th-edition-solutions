#include <stdio.h>
#define OVERTIME 15
#define TAX300 0.15
#define TAX450 0.2
#define TAXMORE 0.25

int main(void)
{
    float gross, tax, net, time, overtime, wrong, bpr;
    char bpr_i;
    printf("This code needs to know how long you worked to calculate your gross income, your tax, and your net income.\n");
    printf("These are our standards:\n");
    printf("You can choose your BPR, but you always get time and a half overtime.\n");
    printf("Taxes for first $300 are 15%%, for another $150 are 20%%, and for the rest 25%%.\n");
    printf("Now please choose the desired pay rate: a) $8.75/h\nb) $9.33/h\nc) $10.00/h\nd) $11.20/h\nq) quit\n");
    while (scanf("%s", &bpr_i))
    {
        switch ((int)bpr_i)
        {
        case 97:
            printf("OK!\n");
            bpr = 8.75;
            break;
        case 98:
            printf("OK!\n");
            bpr = 9.33;
            break;
        case 99:
            printf("OK!\n");
            bpr = 10;
            break;
        case 100:
            printf("OK!\n");
            bpr = 11.2;
            break;
        case 113:
            printf("Bye!\n");
            return 1;
        default:
            printf("Please enter the correct value!\n");
            wrong = 1;
        }
        if (wrong != 1)
            break;
        else
        {
            printf("Now please choose the desired pay rate: 1) $8.75/h\n2) $9.33/h\n3) $10.00/h\n4) $11.20/h\n5) quit\n");
            wrong = 0;
        }
    }
    printf("Please enter the hours you have worked here --> ");
    scanf("%f", &time);
    if (time > 40)
        overtime = time - 40;
    else
        overtime = 0;
    gross = time * bpr + overtime * OVERTIME;
    if (gross <= 300)
        tax = gross * TAX300;
    else if (gross > 300 && gross <= 450)
        tax = 300 * TAX300 + (gross - 300) * TAX450;
    else
        tax = 300 * TAX300 + 150 * TAX450 + (gross - 450) * TAXMORE;
    net = gross - tax;
    printf("You have earnt %0.2f in gross income. However, you had to pay %0.2f for tax, so your net income is %0.2f.\n", gross, tax, net);
}