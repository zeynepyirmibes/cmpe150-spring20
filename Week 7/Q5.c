/* Write a function named toUpper which takes a char as input,
 * and returns the upper case version of the character
 * if it is a lower case letter.
 * Otherwise it should return the same character.
 * Then write a program which reads a word from the user,
 * and prints it with upper case characters.
 * Assume valid words will be given.*/

#include <stdio.h>

// Function that tells (returns an integer) if a character is lower (1) or not (0)
int isLower(char letter){
	if(letter >= 'a' && letter <= 'z'){
		return 1;
	}
	return 0;
}

char toUpper(char letter){
	if(isLower(letter) == 1){
		return letter - ('a' - 'A');
	}
	else{
		return letter;
	}
}

int main()
{
	char ch;

	do{
		scanf("%c", &ch);
		printf("%c", toUpper(ch));
	}while(ch != '\n');


	return 0;
}
