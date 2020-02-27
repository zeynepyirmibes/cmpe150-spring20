// Advanced C operators
#include <stdio.h>

int main()
{
    int n = 1;
    int m = 3;

    n += 5;
    printf("n = %d \n", n);

    n--; // is equivalent to n = n - 1;
    printf("n = %d \n", n);

    m *= 4;
    printf("m = %d \n", m);

    m++; // is equivalent to m += 1, or m = m + 1;
    printf("m = %d \n", m);

    int a = 5, b = 4;

    //Post-increment
    a += b++;
    printf("a = %d , b = %d \n", a, b);

    //Pre-decrement
    a += --b;
    printf("a = %d , b = %d \n", a, b);


}
