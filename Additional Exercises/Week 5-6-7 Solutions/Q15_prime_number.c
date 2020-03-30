/* Take an integer from the user, and tell if it's a prime number or not.
 * If the user inputs a negative integer, print "Wrong input!". */

#include <stdio.h>

int main(){

	int number, i;
	char prime_char; // Not prime if n

	scanf("%d", &number);

	if(number < 0){
		printf("Wrong input!");
	}
	else{
		for(i = 2; i <= number/2; i++){
			if(number%i == 0){
				prime_char = 'n';
			}
		}

		if(prime_char == 'n'){
			printf("Not a prime number.");
		}
		else if(number == 1 || number == 0){ //We have to cover the cases for 0 and 1
			printf("Not a prime number.");
		}
		else{
			printf("Prime number!!!");
		}
	}

	return 0;
}
