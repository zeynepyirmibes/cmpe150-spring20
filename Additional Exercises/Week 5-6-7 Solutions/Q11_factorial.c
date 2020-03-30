/* Write a program that takes an integer from the user, and prints the factorial
 * (do not use any pre-defined C function, compute the factorial yourself).
 * If the user has entered a negative number, print "Wrong input!". */

#include <stdio.h>

int main(){

    int number, i, factorial = 1;

    scanf("%d", &number);

    if(number < 0){
        printf("Wrong input!");
    }
    else{

        for(i = number; i > 0; i--){
                factorial *= i;
        }

        printf("%d", factorial);
    }

    return 0;
}
