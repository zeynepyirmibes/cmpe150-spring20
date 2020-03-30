/* Write a program that takes three integers from the user,
 * and finds the largest of three numbers. */

#include <stdio.h>

int main(){

	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3)){
    	printf("The 1st is the greatest of all.");
    }
    if ((num2 > num3) && (num2 > num1)){
    	printf("The 2nd is the greatest of all.");
    }
    if ((num3 > num1) && (num3 > num2)){
    	printf("The 3rd is the greatest of all.");
    }

	return 0;
}
