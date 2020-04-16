/* Write a function that will take a positive integer n,
 * and returns the nth fibonacci number.
 * Then write main appropriately to see the result.*/

#include <stdio.h>

int fibonacci(int n){
	int a = 0, b = 1, sum, i;
	if(n == 1){
		return a;
	}

	for (i = 3; i <= n; i++){
		sum = a + b;
	    a = b;
	    b = sum;
	}

	return b;
}

int main()
{
	int x;

	scanf("%d", &x);

	printf("%d", fibonacci(x));

	return 0;
}
