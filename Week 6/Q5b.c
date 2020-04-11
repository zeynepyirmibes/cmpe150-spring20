/* Write a program to display a right angle triangle using the number N,
 * which will repeat the number for that row, like below.
Input:
5
Output:
1
22
333
4444
55555 */

#include <stdio.h>
int main()
{
	int number, i, j;

	scanf("%d", &number);

	for(i = 1; i <= number; i++){
		for(j = 1; j <= i; j++){
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}
