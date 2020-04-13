/* Take an integer number from the user,
 * and print the number of digits in it. */

#include <stdio.h>

int main(){

	int number, digit_counter = 0;

	scanf("%d", &number);

	while(number > 0){
		number = number / 10;
		digit_counter++;
	}

	printf("%d", digit_counter);

	return 0;
}
