/* Write a basic calculator program (+, -, *, /).
 * The program takes three inputs: float, char, float, then prints the result.
 * switch version  */

#include <stdio.h>

int main(){

	float no1, no2;
	char operation;
	scanf("%f %c %f", &no1, &operation ,&no2); // Be careful about the order

	switch(operation){
	case '+':
		printf("%.2f", no1 + no2);
		break;
	case '-':
		printf("%.2f", no1 - no2);
		break;
	case '*':
		printf("%.2f", no1 * no2);
		break;
	case '/':
		printf("%.2f", no1 / no2);
		break;
	}

	return 0;
}
