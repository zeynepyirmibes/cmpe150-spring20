/* Write a function that will take an integer n,
 * and returns 't' if it's a perfect number.
 * Otherwise the function should return 'f'.
 * Perfect Number: a positive integer that is equal to the sum of its positive divisors excluding the number itself.
 * Then write main appropriately to see the result.*/

#include <stdio.h>

char isPerfect(int number){
	int i, sum_of_proper_divisors = 0;

	for(i = 1; i < number; i++){
		if(number%i == 0){
			sum_of_proper_divisors += i;
		}
	}

	if(sum_of_proper_divisors == number){
		return 't';
	}
	else{
		return 'f';
	}

}

int main()
{
	int number;

	scanf("%d", &number);

	printf("%c", isPerfect(number));

	return 0;
}
