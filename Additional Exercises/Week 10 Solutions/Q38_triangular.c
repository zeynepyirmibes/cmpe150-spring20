/**
 * C program to find upper triangular matrix
 */

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int isUpperTriangular(int array[MAX_ROWS][MAX_COLS]){
    int row, col, isUpper = 1;

    /* Check Upper triangular matrix condition */
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            /*
             * If elements below the main diagonal (col<row)
             * is not equal to zero then it is not upper triangular matrix
             */
            if(col<row && array[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }

    return isUpper;
}

int isLowerTriangular(int array[MAX_ROWS][MAX_COLS]){
    int row, col, isLower = 1;

    /* Check whether the matrix is lower triangular matrix */
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            /*
             * If elements above main diagonal(col>row)
             * is not equal to zero(array[row][col]!=0)
             */
            if(col>row && array[row][col]!=0)
            {
                isLower = 0;
            }
        }
    }

    return isLower;
}

int main()
{
    int array[MAX_ROWS][MAX_COLS];
    int row, col;

    /* Input elements in matrix from user */
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }
    
    if(isUpperTriangular(array) == 1)
    {
        printf("It is upper triangular.\n");

    }
    else
    {
        printf("It's not upper triangular.\n");
    }

    if(isLowerTriangular(array) == 1)
    {
        printf("It is lower triangular.\n");

    }
    else
    {
        printf("It's not lower triangular.\n");
    }

    return 0;
}