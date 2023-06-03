#include <stdio.h>

#define ANTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DISCOUNT100 0.05
#define DISCOUNTFALSE 0
#define DISCOUNTTRUE 1
#define SHIPPINGUNDER5 6.5
#define SHIPPINGUNDER20 14
#define SHIPPINGOVER20 0.5

int main(void)
{
    float input = 0, antichokes = 0, beets = 0, carrots = 0, totalc = 0, totalp = 0, shipping = 0, discountc = 0;
    int round = 1, discount = DISCOUNTFALSE;
    printf("Hello, this is XXX Store Online. Customers will order in the order of:\n");
    printf("1.Antichokes\n2.Beets\n3.Carrots\n");
    printf("And customers will keep ordering until the order has been terminated.\n");
    printf("Please start ordering here (q to terminate): ");
    while (1)
    {
        scanf("%f", &input);
        if (input < 0)
            break;
        if (round == 1)
        {
            antichokes += input;
            printf("%0.2f pounds of antichokes ordered.\n", input);
        }
        else if (round == 2)
        {
            beets += input;
            printf("%0.2f pounds of beets ordered.\n", input);
        }
        else if (round == 3)
        {
            carrots += input;
            printf("%0.2f pounds of carrots ordered.\n", input);
            round = 1;
        }
        round++;
        printf("Please order again: ");
    }
    printf("Processing order...\n");
    totalp = antichokes + beets + carrots;
    totalc = antichokes * ANTICHOKES + beets * BEETS + carrots * CARROTS;
    if (totalc == 0)
    {
        printf("Dear customer, you did not order anything!\n");
        return 1;
    }
    if (totalc >= 100)
    {
        printf("Congratulations! You've got a 5%% discount because your order was +$100!\n");
        discount = DISCOUNTTRUE;
        discountc = totalc * DISCOUNT100;
        totalc = totalc - discountc;
    }
    if (totalp <= 5)
    {
        printf("You are charged Level 1 of shipping cost.\n");
        shipping = SHIPPINGUNDER5;
    }
    else if (totalp > 5 && totalp <= 20)
    {
        printf("You are charged Level 2 of shipping cost.\n");
        shipping = SHIPPINGUNDER20;
    }
    else
    {
        printf("You are charged Level 3 of shipping cost.\n");
        shipping = SHIPPINGUNDER20 + (totalp - 20) * SHIPPINGOVER20;
    }
    printf("Here is your bill:\n");
    printf("Antichokes:\n");
    printf("\tCost per pound: %0.2flb\n", ANTICHOKES);
    printf("\tPounds ordered: %0.2flb\n", antichokes);
    printf("\tTotal cost: $%0.2f\n", antichokes * ANTICHOKES);
    printf("Beets:\n");
    printf("\tCost per pound: %0.2flb\n", BEETS);
    printf("\tPounds ordered: %0.2flb\n", beets);
    printf("\tTotal cost: $%0.2f\n", beets * BEETS);
    printf("Carrots:\n");
    printf("\tCost per pound: %0.2flb\n", CARROTS);
    printf("\tPounds ordered: %0.2flb\n", carrots);
    printf("\tTotal cost: $%0.2f\n", carrots * CARROTS);
    printf("Total cost for three vegetables: $%0.2f\n", totalc + discountc);
    printf("Total pounds ordered for three vegetables: %0.2flb\n", totalp);
    if (discount == DISCOUNTFALSE)
        printf("No discount received.\n");
    else
    {
        printf("Discount received: $%0.2f\n", discountc);
        printf("Charge after discount: $%0.2f\n", totalc);
    }
    printf("Shipping costs: $%0.2f\n", shipping);
    printf("--------------------------------------\n");
    printf("Grand total: $%0.2f\n", totalc + shipping);
    return 0;
}