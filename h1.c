#include <stdio.h>

void prime(int num)
{
    int flag = 0;

    for (int i = 2; i < num / 2; i++)
    {
        // condition for non-prime
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (num == 1)
    {
        printf("1 is neither Prime nor Composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a Prime number.", num);
        else
            printf("%d is Composite number.", num);
    }
}

void evOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is EVEN.", num);
    }
    else
    {
        printf("%d is ODD.", num);
    }
}

int isPalindrome(int number)
{
    int reversed = 0;
    int original_number = number;

    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }

    printf("The reversed number is: %d\n", reversed);

    if (original_number == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
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

int fib_recursive(int number)
{
    if (number == 1 || number == 2)
    {
        return number - 1;
    }
    else
    {
        return fib_recursive(number - 1) + fib_recursive(number - 2);
    }
}

void facto(int num)
{
    int temp = 1;

    if (num == 0)
    {
        printf("1");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            temp = temp * i;
        }
        printf("%d", temp);
    }
}

void func(int swt)
{
    int num;
    switch (swt)
    {
    case 1:
        printf("Enter a positive integer to check if it's a Prime or Not: ");
        scanf("%d", &num);

        prime(num);

        break;

    case 2:
        printf("Enter a num: to check if it's EVEN or ODD: ");
        scanf("%d", &num);

        evOdd(num);

        break;

    case 3:
        printf("Enter a number to check whether it is Palindrome or not: ");
        scanf("%d", &num);

        if (isPalindrome(num))
        {
            printf("Your number [%d] is a Palindrome.", num);
        }
        else
        {
            printf("Your number [%d] is not a palindrome!", num);
        }
        break;

    case 4:
        printf("Type a number you want the fibonacci series of: ");
        scanf("%d", &num);
        int rt = fib_iterative(num);
        printf("\n");
        printf("The value of fibonacci number at position {%d}, is %d\n", num, rt);
        break;

    case 5:
        printf("Type a number you want the fibonacci series of: ");
        scanf("%d", &num);
        int rt2 = fib_recursive(num);
        printf("\n");
        printf("The value of fibonacci number at position {%d}, is %d\n", num, rt2);
        break;

    case 6:
        printf("Type a number you want the factorial of: ");
        scanf("%d", &num);
        facto(num);
        break;

    default:
        printf("Enter a valid Entity!");
        break;
    }
}

int main()
{
    int swt;
    printf("Enter 1: To ckeck if a no. is prime or composite.\nEnter 2: To check if a no. is even or odd. \nEnter 3: To check if a no. is Palindrome. \nEnter 4: To view Fibonacci Series (iterative approach).\nEnter 5: To view Fibonacci Series (recursive approach). \nEnter 6: To view Factorial of your number.\n");
    scanf("%d", &swt);
    printf("\n");
    func(swt);

    return 0;
}