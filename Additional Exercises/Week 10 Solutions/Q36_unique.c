/**
 * C program to print all unique elements in array
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;
 
    /* Input size of array and elements in array */
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
 
    /* Find frequency of each element */
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    /* Print all unique elements of array */
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}