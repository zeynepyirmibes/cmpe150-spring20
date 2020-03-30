/* Write a program that takes 2 integers a and b,
 * then prints the result of a^b (a*a*a...*a*a) using a for/while loop. */

#include <stdio.h>

int main(){

    int a, b, i, exponential = 1;

    scanf("%d %d", &a, &b);

    for(i = 0; i < b; i++){
        exponential *= a;
    }

    printf("%d", exponential);

    return 0;
}
