/* Take an integer number from the user,
 * and print the sum of the digits in it. */

#include <stdio.h>

int main(){

	int number, sum_of_digits = 0;

	scanf("%d", &number);

	while(number > 0){
		sum_of_digits += number % 10;
		number = number / 10;
	}

	printf("%d", sum_of_digits);

	return 0;
}
