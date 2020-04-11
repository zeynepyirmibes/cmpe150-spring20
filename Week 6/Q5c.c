/* Write a program to display a right angle triangle
 * with number increased by 1, like below.
Input:
4
Output:
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
int main()
{
	int number, i, j, printed_number = 1;

	scanf("%d", &number);

	for(i = 1; i <= number; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", printed_number++);
		}
		printf("\n");
	}

	return 0;
}
