/* Write power function which takes two integer numbers a and b,
 * then calculates and returns a^b.
 * Then write main() appropriately to see the result.*/

#include <stdio.h>

int power(int a, int b){
	int i, result = 1;
	for (i = 0; i < b; i++){
		result *= a;
	}

	return result;
}


int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	// Computing x^y
	int r = power(x, y);

	printf("%d", r);

	return 0;
}
