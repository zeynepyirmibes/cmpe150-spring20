/* Write a function that takes a positive integer (you may use a long int)
 * as input and returns the leading digit (leftmost digit).
 * For example, the leading digit of 234567 is 2.*/

#include <stdio.h>

int leadingDigit(long int x){
    int leading = 0;

    while(x > 0){
        leading = x % 10;
        x /= 10;
    }

    return leading;
}

int main() {
    long int number;

    scanf("%ld", &number);

    printf("%d", leadingDigit(number));

    return 0;
}
