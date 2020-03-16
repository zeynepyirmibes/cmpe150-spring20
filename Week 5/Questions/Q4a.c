#include <stdio.h>
/* Take an input char from the user, until '*' is met.  */

int main(){

	char ch;
	scanf("%c", &ch);

	while(ch != '*'){
		scanf("%c", &ch);
	}

	return 0;
}
