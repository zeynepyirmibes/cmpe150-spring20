//Write a program that reads two integers as the side lengths of a rectangle. 
//Output the perimeter and the area of the rectangle.
#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d", 2*(a + b), a*b);

	return 0;
}
