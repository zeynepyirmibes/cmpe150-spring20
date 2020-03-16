#include <stdio.h>
/* Write a program that reads an integer N and prints numbers from 1 to N to the screen.
*/

int main(){

	int i, n;
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		printf("%d ", i);
	}
}
