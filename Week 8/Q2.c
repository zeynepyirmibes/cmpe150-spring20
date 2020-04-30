#include <stdio.h>
#include <stdlib.h>

//write the swap function here

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}

int main(void) {

	//create two integers, scan and print their values here

	//call the swap function with the addresses of
	//these integers, and print the result here
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
	
	return 0;
}