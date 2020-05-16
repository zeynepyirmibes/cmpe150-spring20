#include <stdio.h>
#define MAX 100

// Convert a lower to upper, upper to lower
void reverse(char str[], int index){
	if(str[index] >= 'A' && str[index] <= 'Z'){
		str[index] = str[index] + ('a' - 'A');
	}
	else if(str[index] >= 'a' && str[index] <= 'z'){
		str[index] = str[index] - ('a' - 'A');
	}
}


int main(){
	char str[MAX];
	int i;

	fgets(str, MAX, stdin);

	// Convert the whole string
	for(i = 0; str[i] != '\0'; i++){
		reverse(str, i);
		printf("%c", str[i]);
	}

	return 0;
}
