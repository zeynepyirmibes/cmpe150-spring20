/* Allow the user to enter natural numbers (integers) as long as they want.
 * If the user inputs a negative number, then stop taking inputs,
 * and print their sum (as an integer) and average (as a float). NOTE:
 * Do not take the negative number into your calculation. */

#include <stdio.h>

int main(){

    int number;
    int sum = 0;
    int count_of_numbers = 0;

    scanf("%d", &number);

    while(number >= 0){
        sum += number;
        count_of_numbers++;
        scanf("%d", &number);
    }

    printf("Sum = %d Average = %.1f", sum, (float)sum/count_of_numbers);

    return 0;
}
