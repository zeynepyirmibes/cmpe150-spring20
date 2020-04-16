/* Write a factorial function, that takes an integer n as input, and returns n!.
 * Afterwards, write a permutation function,
 * that takes two integers n, k as input, and returns P(n,k)=n!/(n-k)!.
 * You should use your factorial function inside the permutation function.
 * Then organize the main function, to take two integers from the user,
 * and prints the permutation.*/

#include <stdio.h>

int factorial(int n){
	int i, result = 1;
	for(i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}

int permutation(int n, int k){
	return factorial(n) / factorial(n - k);
}

int main()
{
	int n, k;

	scanf("%d %d", &n, &k);

	printf("%d", permutation(n, k) );

	return 0;
}
