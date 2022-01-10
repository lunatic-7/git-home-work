#include <stdio.h>

void even(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

void odd(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}

void natural(int num)
{
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", i);
    }
}

int fib_iterative(int number2)
{
    int a = 0;
    int b = 1;

    printf("0 ");

    for (int i = 0; i < number2 - 1; i++)
    {
        b = a + b;
        a = b - a;
        printf("%d ", a);
    }

    return a;
}

void cases(int swi)
{
    int num;
    switch (swi)
    {
    case 1:
        printf("Enter a number to print it's Even series: ");
        scanf("%d", &num);
        even(num);
        break;

    case 2:
        printf("Enter a number to print it's Odd series: ");
        scanf("%d", &num);
        odd(num);
        break;

    case 3:
        printf("Enter a number to print it's natural number series: ");
        scanf("%d", &num);
        natural(num);
        break;
    
    case 4:
        printf("Enter a number to print it's Fibonacci series: ");
        scanf("%d", &num);
        fib_iterative(num);
        break;

    default:
        printf("Enter a Valid Entity!");
        break;
    }
}

int main()
{
    int swi;
    printf("Enter 1: To print series of Even numbers: \nEnter 2: To print series of Even numbers: \nEnter 3: To print series of Natural numbers: \nEnter 4: To print Fibonacci Series: \n");
    scanf("%d", &swi);
    printf("\n");
    cases(swi);
    return 0;
}