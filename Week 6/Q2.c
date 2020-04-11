/* Write a program that will take integers as inputs until
 * the user enters a negative number.
 * Then show the user the sum of all the non-negative numbers
 * he/she entered.
 * (Use do..while with the break statement)*/

#include <stdio.h>
int main()
{
	int number, sum = 0;
	do{
		scanf("%d", &number);
		if(number < 0){
			break;
		}
		sum += number;
	}while(number>=0);

	printf("%d", sum);

	return 0;
}

