//Write a program that reads two integers from the user. 
//Output the incremented version of the first number, and the decremented version of the second number. 
//(Hint: Use the increment/decrement operators)

#include <stdio.h>

int main(){
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d %d", ++a, --b); // We have used the pre-increment/decrement operators


	//Notice that the below line (with post-increment/decrement operators) would not satisfy our purpose. 
	//Try for yourself. 
	//printf("%d %d", a++, b--);

	return 0;
}
