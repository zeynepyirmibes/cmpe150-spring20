#include <stdio.h>
/* Take three integers from the user. Print the average, minimum and maximum of the numbers. */

int main(){

	int a, b, c, min, max;
	float avg;
	scanf("%d %d %d", &a, &b, &c);

	avg = (a + b + c) / 3.0;

	min = a;

	if(b < min){
		min = b;
	}
	if(c < min){
		min = c;
	}

	max = a;

	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}

	printf("%.1f %d %d", avg, min, max);

	return 0;
}
