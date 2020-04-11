/* Write a program that reads an integer value,
 * and computes the sum of the factorial of each digit .
 * The output will be an integer .
 * For example, assume that the user enters "572" as the input integer.
 * For each digit of the integer, you will compute the factorial.
 * Then you will compute the sum of these factorials: 5! + 7! + 2! = 120 + 5040 + 2 = 5162*/

#include <stdio.h>
int main()
{
	int number, factorial, current_digit, i;
	int sum_of_factorials = 0;

	scanf("%d", &number);

	while(number > 0){
		current_digit = number % 10;
		factorial = 1;

		for(i = 1; i <= current_digit; i++){
			factorial *= i;
		}

		printf("%d! = %d \n", current_digit, factorial);
		sum_of_factorials += factorial;
		number = number / 10;
	}

	printf("%d", sum_of_factorials);

	return 0;
}
