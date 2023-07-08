#include <stdio.h>
#include <unistd.h>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4
#define QUIT 0

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

void printm(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a)Addition\ns)Subtraction\nm)Multiplication\nd)Division\nq)Quit\n");
}

void printnf(void)
{
    printf("Enter first number: ");
}

void printns(void)
{
    printf("Enter second number: ");
}

void printr(int result, int input, int a, int b)
{
    if (input == ADDITION)
    {
        printf("%d + %d = %d\n", a, b, result);
    }
    else if (input == SUBTRACTION)
    {
        printf("%d - %d = %d\n", a, b, result);
    }
    else if (input == MULTIPLICATION)
    {
        printf("%d x %d = %d\n", a, b, result);
    }
    else if (input == DIVISION)
    {
        printf("%d ÷ %d = %d\n", a, b, result);
    }
}

int getChoiceO(void)
{
    char choice;
    while (1)
    {
        scanf("%c", &choice);
        if (choice == 'a' || choice == 'A')
        {
            return ADDITION;
        }
        else if (choice == 's' || choice == 'S')
        {
            return SUBTRACTION;
        }
        else if (choice == 'm' || choice == 'M')
        {
            return MULTIPLICATION;
        }
        else if (choice == 'd' || choice == 'D')
        {
            return DIVISION;
        }
        else if (choice == 'q' || choice == 'Q')
        {
            return QUIT;
        }
        else
        {
            printf("Please enter the right choice!\n");
            sleep(1); // the sleep() functions are unnecessary, stops code from lagging out
            printm();
            printf("Enter now: ");
        } // Switch+case is also OK, I just used if, else if, and else.
    }
}

int getChoiceN(void)
{
    int choice;
    scanf("%d", &choice);
    return choice;
}

int judgeChoice(int a, int b, int input)
{
    if (input == ADDITION)
    {
        return addition(a, b);
    }
    else if (input == SUBTRACTION)
    {
        return subtraction(a, b);
    }
    else if (input == MULTIPLICATION)
    {
        return multiplication(a, b);
    }
    else if (input == DIVISION)
    {
        return division(a, b);
    }
    else if (input == QUIT)
    {
        return QUIT;
    }
}

int main(void)
{
    while (1)
    {
        printm();
        sleep(1);
        int input = getChoiceO();
        if (input == QUIT)
        {
            return 0;
        }
        printnf();
        sleep(1);
        printf("Enter now: ");
        int a = getChoiceN();
        printns();
        sleep(1);
        printf("Enter now: ");
        int b = getChoiceN();
        int result = judgeChoice(a, b, input);
        printr(result, input, a, b);
    }
}