#include <stdio.h>
/* Write a program that reads an integer. If the integer is positive then check if the number is odd or even and then print “odd” or “even”, 
if it is negative then print the absolute value of the number, if it is zero then print “zero”.
*/

int main(){

	int a;
	scanf("%d", &a);

	if(a > 0){
	    if(a % 2 == 0){
	    	printf("even");
	    }
	    else{
	    	printf("odd");
	    }
	}
	else if(a == 0){
		printf("zero");
	}
	else{
		printf("%d", -a);
	}
}
