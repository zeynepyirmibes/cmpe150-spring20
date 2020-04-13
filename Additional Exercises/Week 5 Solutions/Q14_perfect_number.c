/* A perfect number is a positive integer that is equal to the sum of its proper divisors.
 * The smallest perfect number is 6, which is the sum of 1, 2, and 3.
 * Take an integer from the user, and tell if it's a perfect number or not.
 * If the user inputs a negative integer, print "Wrong input!". */

#include <stdio.h>

int main(){

	int number, i, sum_of_proper_divisors = 0;

	scanf("%d", &number);

	if(number < 0){
		printf("Wrong input!");
	}
	else{
		for(i = 1; i < number; i++){
			if(number%i == 0){
				sum_of_proper_divisors += i;
			}
		}

		if(sum_of_proper_divisors == number){
			printf("Perfect number!!!");
		}
		else{
			printf("Not a perfect number.");
		}
	}

	return 0;
}
