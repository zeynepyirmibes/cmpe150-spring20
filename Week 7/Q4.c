/* Write a function named printAsTime which reads
 * hours, minutes, and seconds as three integers,
 * then prints it to the screen as shown in the examples.
 * This function shouldn't return anything.
 * Assume no invalid input will be given (like 92 minutes or -2 hours).*/

#include <stdio.h>

void printAsTime(){ // A void function
	int hours, minutes, seconds;

	scanf("%d %d %d", &hours, &minutes, &seconds);

	if(hours < 10){
		printf("0");
	}
	printf("%d:", hours);
	if(minutes < 10){
		printf("0");
	}
	printf("%d:", minutes);
	if(seconds < 10){
		printf("0");
	}
	printf("%d", seconds);

}

int main()
{
	printAsTime();

	return 0;
}
