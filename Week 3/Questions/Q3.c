#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(void) {
	float r;
	scanf("%f", &r);

	printf("Area = %.1f \n", PI * r * r);
	printf("Circumference = %.1f \n", 2 * PI * r);

	return 0;
}
