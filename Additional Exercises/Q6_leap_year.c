/* Write a program that reads the year (as an integer) from the user,
 * and prints if it is a leap year or not. (You can google leap year) */

#include <stdio.h>

int main(){

	int year;
	scanf("%d", &year);

	if ( year % 400 == 0 ){  //don't forget the curly braces
		printf("it is a leap year");
	}
	else if ( year % 100 == 0 ){
		printf("it is not a leap year");
	}
	else if ( year % 4 == 0 ){
		printf("it is a leap year");
	}
	else{
		printf("it is not a leap year");
	}

	return 0;
}
