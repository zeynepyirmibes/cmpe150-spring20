#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
	char input[MAX];
	fgets(input, MAX, stdin);
	int i, counter=1;
	for(i=0; input[i] != '\0'; i++){
		if(input[i] == ' '){
			counter++;
		}
	}
    printf("%d", counter);
	return 0;
}
