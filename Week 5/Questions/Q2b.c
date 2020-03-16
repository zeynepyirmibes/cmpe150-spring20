#include <stdio.h>
// Write a program that reads an integer N. Print N stars using while.

int main(){

	int counter = 0, N;

	scanf("%d", &N);

	while(counter < N){
		printf("*");
		counter++;
	}

	return 0;
}
