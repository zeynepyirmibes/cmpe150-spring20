/* Take two integers from the user
 * (assume first is smaller than the second).
 * Print the prime numbers between them.
 * (Use nested loops)
 * using squareroot function */

#include <stdio.h>
#include <math.h>

int main()
{
	int no1, no2, i, j;
	int prime_flag; //not prime if 1

	scanf("%d %d", &no1, &no2);

	for(i = no1; i <= no2; i++){
		prime_flag = 0;
		for(j = 2; j <= sqrt((float)i); j++){
			if(i % j == 0){
				prime_flag = 1;
				break;
			}
		}
		if(i == 1){
			prime_flag = 1;
		}
		if (prime_flag == 0){
			printf("%d ", i);
		}
	}

	return 0;
}
