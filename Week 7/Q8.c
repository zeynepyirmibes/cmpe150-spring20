/* Write a function named fetchDigit which takes two integers as input:
 * number and n. Function should return the nth digit (from the right)
 * of the number as an integer. If the number is less than n digits, function should return -1.
 * Then write a program which reads a positive integer z and
 * another integer x, then print out the xth digit of z.
 * If the input is incorrect (z doesn't have x digits), program should print "Incorrect input".
 * Assume negative integers will not be given.*/

#include <stdio.h>

// Function should return mod10{ number/(10^(n-1)) }
int fetchDigit(int number, int n){
	int i, power_of_ten = 1;
	for(i = 1; i < n; i++){
		power_of_ten *= 10;
	}

	if(number < power_of_ten){
		return -1;
	}

	number = number / power_of_ten;
	return (number % 10);
}

int main()
{
	int a_big_number, n, digit;

	scanf("%d %d", &a_big_number, &n);

	digit = fetchDigit(a_big_number, n);

	if(digit == -1){
		printf("Incorrect input");
	}
	else{
		printf("%d", digit);
	}

	return 0;
}
