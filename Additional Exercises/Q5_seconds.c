//Write a program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);

	int hours, minutes, seconds;

	hours = a / 3600;
	a = a - (3600*hours);
	minutes = a / 60;
	seconds = a % 60;

	printf("%d hours %d minutes %d seconds", hours, minutes, seconds ); 

	return 0;
}
