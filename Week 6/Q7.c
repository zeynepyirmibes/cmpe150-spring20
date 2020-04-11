/* Write a program that takes a maximum of 10 numbers from the user.
 * Calculate the sum of the numbers, skipping negative inputs. (Use continue) */

#include <stdio.h>
int main()
{
	int number, i;
	int sum = 0;

	for(i = 0; i < 10; i++){
		scanf("%d", &number);
		if(number < 0){
			continue;
		}
		else{
			sum += number;
		}
	}

	printf("%d", sum);

	return 0;
}
