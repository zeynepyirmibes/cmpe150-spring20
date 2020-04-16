/* Write a function that will take an integer number and
 * return its reverse version as another integer.
 * Then fill main() appropriately to see the result.*/

#include <stdio.h>

int reverse(int number){
	int reversed_number = 0;

	while(number > 0){
		reversed_number = 10*reversed_number + (number%10);
		number = number / 10;
	}
	return reversed_number;
}

int main()
{
	int number;

	scanf("%d", &number);

	printf("%d", reverse(number));

	return 0;
}
