/* Write a function that takes two integers as parameters n and m,
 * and prints out a rectangle nxm using '*'s.
 * This function shouldn't return anything.
 * Then write main() appropriately to see the result.*/

#include <stdio.h>

void rectangle(int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int side1, side2;

	scanf("%d %d", &side1, &side2);

	rectangle(side1, side2);

	return 0;
}
