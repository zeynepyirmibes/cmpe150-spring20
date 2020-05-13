/**
 * C program to find sum of elements of rows and columns of matrix
 */

#include <stdio.h>

void sumOfRows(int row, int col, int A[row][col]){
    int i, j, sum = 0;

    /* Calculate sum of elements of each row of matrix */
    for(i=0; i<row; i++)
    {
        sum = 0;
        for(j=0; j<col; j++)
        {
            sum += A[i][j];
        }

        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }
}

void sumOfColumns(int row, int col, int A[row][col]){
    int i, j, sum = 0;

    /* Find sum of elements of each columns of matrix */
    for(i=0; i<row; i++)
    {
        sum = 0;
        for(j=0; j<col; j++)
        {
            sum += A[j][i];
        }

        printf("Sum of elements of Column %d = %d\n", i+1, sum);
    }
}

int main()
{
    
    int rowsize, colsize, row, col;

    scanf("%d %d", &rowsize, &colsize);

    int A[rowsize][colsize];

    for(row=0; row<rowsize; row++)
    {
        for(col=0; col<colsize; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    
    sumOfRows(rowsize, colsize, A);

    sumOfColumns(rowsize, colsize, A);


    return 0;
}