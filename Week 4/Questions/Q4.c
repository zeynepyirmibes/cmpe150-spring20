#include <stdio.h>
/* Write a program that will take 2 numbers from the user and if the first number is divisible by the second number, 
your code should print “it is divisible”, if it is not divisible, then print “it is not divisible”. 
If any of your numbers are nonpositive, print “Incorrect Input” */

int main(){

	int a, b;
	scanf("%d%d", &a, &b);

	if(a < 0 || b < 0){
		printf("Incorrect Input");
	}
	else if(a % b == 0){
	    printf("it is divisible");
	}
	else{
		printf("it is not divisible");
	}

	return 0;
}
