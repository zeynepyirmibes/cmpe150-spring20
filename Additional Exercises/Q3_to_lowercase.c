//Write a program that reads a character from the user. Convert this character into lowercase , and print. 
//(Hint: Difference between lowercase and uppercase characters are always the same)

#include <stdio.h>

int main(){
	char ch;
	scanf("%c", &ch);

	printf("%c", ch + ('a' - 'A'));

	return 0;
}
