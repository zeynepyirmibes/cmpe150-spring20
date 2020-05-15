#include <stdio.h>
#define MAX 100

// Convert a character into lowercase
void toLower(char str[], int index){
	if(str[index] >= 'A' && str[index] <= 'Z'){
		str[index] = str[index] + ('a' - 'A');
	}
}


int main(){
	char str[MAX];
	int i;

	fgets(str, MAX, stdin);

	// Convert the whole string into lowercase
	for(i = 0; str[i] != '\0'; i++){
		toLower(str, i);
		printf("%c", str[i]);
	}

	return 0;
}
