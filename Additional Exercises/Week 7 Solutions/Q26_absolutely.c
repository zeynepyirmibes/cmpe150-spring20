/* Write a (boolean) function isNegative that takes an integer as an input,
 * and returns 1 (true) if the number is negative, returns 0 (false) if it is positive or zero.
 * (You can reference the isLower function we implemented in class)
 * Then write an absolute function, that takes an integer, and (using the isNegative function you've written) returns its absolute value.
 * Organize the main function to see the result.*/

#include <stdio.h>

int isNegative(int x){
    if(x < 0){
        return 1;
    }
    return 0;
}

int absolute(int a){
    if(isNegative(a) == 1){
        return -a;
    }
    else{
        return a;
    }
}

int main() {
    int number;

    scanf("%d", &number);

    printf("%d", absolute(number));

    return 0;
}
