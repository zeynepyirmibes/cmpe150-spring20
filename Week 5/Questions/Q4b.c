#include <stdio.h>
/* Take an input char from the user, count the lowercase letters in this sequence until * is met. */

int main(){

	char ch;
	int counter = 0;
	scanf("%c", &ch);

	while(ch != '*'){
		if(ch >= 'a' && ch <= 'z'){
			counter++;
		}
		scanf("%c", &ch);
	}

	printf("Count: %d", counter);

	return 0;
}
