/* Write a program to display a right angle triangle with N number of rows, like below.
Input:
5
Output:
1
12
123
1234
12345 */

#include <stdio.h>
int main()
{
	int number, i, j;

	scanf("%d", &number);

	for(i = 1; i <= number; i++){
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
