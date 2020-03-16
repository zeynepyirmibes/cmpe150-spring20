#include <stdio.h>
/* Write a program that reads two integers A and B.
Then prints the sum of even numbers between A and B. */

int main(){

	int a,b, i;
	int sum = 0;

	scanf("%d %d", &a, &b);

	for(i = a + 1; i < b; i++){
		if(i%2 == 0){
			sum += i;
		}
	}

	printf("%d", sum);

	return 0;
}
