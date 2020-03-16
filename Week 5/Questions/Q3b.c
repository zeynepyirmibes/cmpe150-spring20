#include <stdio.h>
/* Write a program that reads an integer N and prints numbers from N to 1 to the screen.
*/

int main(){

	int i, n;
	scanf("%d", &n);

	for(i = n; i >= 1; i--){
		printf("%d ", i);
	}
}
