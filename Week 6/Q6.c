/* Write a program that takes a number and
 * prints its total digit count and also even digit count. */

#include <stdio.h>
int main()
{
	int number, current_digit;
	int digit_count = 0, even_digit_count = 0;


	scanf("%d", &number);

	while(number > 0){
		current_digit = number % 10;
		digit_count++;
		if(current_digit % 2 == 0){
			even_digit_count++;
		}
		number = number/10;
	}

	printf("%d %d", digit_count, even_digit_count);

	return 0;
}
