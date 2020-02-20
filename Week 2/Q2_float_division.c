#include <stdio.h>

/* This is the float division program */

int main(){
	int no1, no2;
	scanf("%d%d",&no1,&no2);
	int integer_division = no1/no2;
	float not_a_float_division = no1/no2;
	float float_division = (no1 * 1.0)/no2;

	printf("Integer division: %d \n", integer_division);
	printf("Not a float division: %f \n", not_a_float_division);
	printf("Float division: %f \n", float_division);

	return 0;
}
