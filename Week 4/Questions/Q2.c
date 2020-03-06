#include <stdio.h>
// Write a program that reads an integer. If integer is positive, print “positive”, if zero, print “zero”, otherwise print “negative”.

int main(){

	int a;
	scanf("%d", &a);

	if(a > 0){
	    printf("positive");
	}
	else if(a == 0){
		printf("zero");
	}
	else{
		printf("negative");
	}

	return 0;
}
