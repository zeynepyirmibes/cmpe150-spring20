#include <stdio.h>

int main(void) {
	float no1, no2;
	printf("Enter the numbers: \n");
	scanf("%f%f", &no1, &no2);

	printf("The sum is: %.3f \n", no1 + no2);

	return 0;
}
