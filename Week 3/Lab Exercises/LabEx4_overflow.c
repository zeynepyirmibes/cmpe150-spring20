// An example of overflow
#include <stdio.h>
#include <limits.h>
int main()
{
    int maximum_int = INT_MAX;    // max value an int can take
    int minimum_int = INT_MIN;    // min value an int can take

    printf("Maximum integer = %d \n", maximum_int);
    printf("Minimum integer = %d \n", minimum_int);

    int x = maximum_int;
    x = x + 1;
    printf("x = %d \n", x); // Overflow

    //Use long to handle large numbers
    long y = maximum_int;
    y = y + 1;
    printf("y = %ld \n", y); // No overflow

    //Explicit casting can also solve this problem
    long z;
    z = (long)maximum_int + 1;
    printf("z = %ld \n", z); // No overflow

    return 0;
}
