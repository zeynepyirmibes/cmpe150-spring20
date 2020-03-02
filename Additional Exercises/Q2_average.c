//Write a program that reads three integers from the user. 
//Output the average of these three numbers. (Hint: Type Casting)

#include <stdio.h>

int main(){
	int a, b, c;
	float average;
	scanf("%d%d%d", &a, &b, &c);
	average = (float)(a + b + c)/3;
	printf("%.2f", average);

	return 0;
}
