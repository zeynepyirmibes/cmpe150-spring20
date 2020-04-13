/* Take an integer n from the user,
 * and print the first n terms of Fibonacci series. */

#include <stdio.h>

int main(){

	int number, i;
	int n1 = 0, n2 = 1, nextTerm;

	scanf("%d", &number);

	for(i = 0; i < number; i++){
		printf("%d ", n1);
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
	}

	return 0;
}
