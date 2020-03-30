/* Write a basic calculator program (+, -, *, /).
 * The program takes three inputs: float, char, float, then prints the result.
 * if/else if version  */

#include <stdio.h>

int main(){

	float no1, no2;
	char operation;
	scanf("%f %c %f", &no1, &operation ,&no2); // Be careful about the order

	if ( operation == '+' ){
		printf("%.2f", no1 + no2);
	}
	else if ( operation == '-' ){
		printf("%.2f", no1 - no2);
	}
	else if ( operation == '*' ){
		printf("%.2f", no1 * no2);
	}
	else if ( operation == '/' ){
		printf("%.2f", no1 / no2);
	}

	return 0;
}
