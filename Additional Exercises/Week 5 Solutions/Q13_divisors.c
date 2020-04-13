/* Take a positive integer from the user. Print its divisors.
 * If the user inputs a negative integer, print "Wrong input!". */

#include <stdio.h>

int main(){

	int number, i;

	scanf("%d", &number);

	if(number < 0){
		printf("Wrong input!");
	}
	else{
		for(i = 1; i <= number; i++){
			if(number%i == 0){
				printf("%d ", i);
			}
		}
	}

	return 0;
}
