#include <stdio.h>

#define ROW 3
#define COLUMN 3

// Display 2D array
void showArr(int arr[ROW][COLUMN], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }
}

// Sum of row
void sumR(int arr[ROW][COLUMN], int row, int column)
{
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i == 0)
            {
                r1 += arr[i][j];
            }
            else if (i == 1)
            {
                r2 += arr[i][j];
            }
            else
            {
                r3 += arr[i][j];
            }
        }
    }
    printf("Sum of ROW: 1 = %d\n", r1);
    printf("Sum of ROW: 2 = %d\n", r2);
    printf("Sum of ROW: 3 = %d\n", r3);

    printf("\n");
}

// Sum of column
void sumC(int arr[ROW][COLUMN], int row, int column)
{
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j == 0)
            {
                c1 += arr[i][j];
            }
            else if (j == 1)
            {
                c2 += arr[i][j];
            }
            else
            {
                c3 += arr[i][j];
            }
        }
    }
    printf("Sum of COLUMN: 1 = %d\n", c1);
    printf("Sum of COLUMN: 2 = %d\n", c2);
    printf("Sum of COLUMN: 3 = %d\n", c3);
    printf("\n");
}

// Show and sum of diagonal elements
void di(int arr[ROW][COLUMN], int row, int column)
{
    int di = 0;
    int i, j;

    printf("Diagonal Elements are: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
                di += arr[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of DIAGONAL: %d\n\n", di);
}

// Transpose
void transpose(int arr[ROW][COLUMN], int row, int column)
{
    int i, j;
    printf("TRANSPOSE: \n\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d   ", arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    showArr(arr, ROW, COLUMN);
    printf("\n");

    sumR(arr, ROW, COLUMN);
    sumC(arr, ROW, COLUMN);
    di(arr, ROW, COLUMN);
    transpose(arr, ROW, COLUMN);

    return 0;
}

// OUTPUT:

/* 

1   2   3   
4   5   6
7   8   9

Sum of ROW: 1 = 6
Sum of ROW: 2 = 15
Sum of ROW: 3 = 24

Sum of COLUMN: 1 = 12
Sum of COLUMN: 2 = 15
Sum of COLUMN: 3 = 18

Diagonal Elements are: 1 5 9
Sum of DIAGONAL: 15

TRANSPOSE:

1   4   7
2   5   8
3   6   9

*/