#include <stdio.h>
/* Write a program that will take 1 char from the user. If the char is a lowercase letter print “lowercase”,
if the char is an uppercase letter print "uppercase",
if the char is a digit (number) print “digit”,
otherwise print “nonsense” */

int main(){

	char ch;
	scanf("%c", &ch);

	if( ch >= 'a' && ch <= 'z' ){
		printf("lowercase");
	}
	else if( ch >= 'A' && ch <= 'Z' ){
		printf("uppercase");
	}
	else if(ch >= '0' && ch <= '9'){
		printf("digit");
	}
	else{
		printf("nonsense");
	}

	return 0;
}
