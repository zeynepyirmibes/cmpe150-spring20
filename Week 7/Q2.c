/* Write two functions: min() and max().
 * Each function should take two integers as inputs.
 * min() should return the smallest of the two, and max() the largest.
 * Then organize the main function, so that it takes two integers from the user.
 * Call the functions that you've written, and print the min and the max integer.
 * If they are equal, then it should print "Equal".*/

#include <stdio.h>

int min(int num1, int num2){
	if(num1 < num2){
		return num1;
	}
	return num2;
}

int max(int num1, int num2){
	// We could have used else, too
	if(num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
}

int main()
{
	int no1, no2, minimum, maximum;

	scanf("%d %d", &no1, &no2);

	minimum = min(no1, no2);
	maximum = max(no1, no2);

	if(minimum == maximum){  // Equivalent to (no1 == no2)
		printf("Equal");
	}
	else{
		printf("Min: %d Max: %d", minimum, maximum);
	}

	return 0;
}
