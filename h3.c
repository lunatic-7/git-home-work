#include <stdio.h>

// Storing an Array
int *storeArr(int num[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter Index[%d]: ", i);
        scanf("%d", &num[i]);
    }
    printf("\n");
    return num;
}

// Showing stored Array
void showArr(int num[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

// Finding largest number
int largest(int num[], int size)
{
    int i;
    int max = num[0];
    for (i = 0; i < size; i++)
    {
        if (max <= num[i])
        {
            max = num[i];
        }
    }
    return max;
}

// Sum of Array
int sum(int num[], int size)
{
    int i, su = 0;
    for (i = 0; i < size; i++)
    {
        su += num[i];
    }
    return su;
}

// Reversing the Array
int revArr(int num[], int size)
{ 
    int i;
    printf("REVERSED: ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ",num[i]);
    }
    
}

int main()
{
    int num[10];
    int size = 10;
    int *n, m, k;
    n = storeArr(num, size);
    
    showArr(n, size);
    
    m = largest(n, size);
    printf("The largest element is: %d\n", m);

    k = sum(n, size);
    printf("Sum of your array is: %d\n", k);

    revArr(n, size);
    return 0;
}