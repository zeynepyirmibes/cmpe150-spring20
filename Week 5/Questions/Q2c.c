#include <stdio.h>
// Write a program that reads an integer N. Print N stars using for.

int main(){

	int counter, N;

	scanf("%d", &N);

	for(counter = 0; counter < N; counter++){
		printf("*");
	}

	return 0;
}
