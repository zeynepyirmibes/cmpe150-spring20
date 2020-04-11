/* Write a program that takes 2 integers and
 * prints their greatest common divisor (GCD). */

#include <stdio.h>
int main()
{
	int no1, no2, i;
	int gcd = 0;

	scanf("%d %d", &no1, &no2);

	for(i = 1; i <= no1 && i <= no2; i++){
		if(no1 % i == 0 && no2 % i == 0){
			gcd = i;
		}
	}

	printf("%d", gcd);

	return 0;
}
