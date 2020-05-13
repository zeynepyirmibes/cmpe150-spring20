#include <stdio.h>
#define SIZE 5

/* Arrays and pointers can be used interchangebly in defining parameters of functions */


void with_array(int array[]){
	for(int i=0;i<SIZE;i++){
		array[i] = 1;
	}
}

void with_pointer(int * array){
	for(int i=0;i<SIZE;i++){
		*array = i+1;
		array++;
	}
}

int main(){

	int a[] = {1,2,3,4,5};
	/* When an array name is passed to a function,
	the address of the initial element of an array is passed actually. */
	with_array(a);
	for(int i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	/* Address of the first element is passed. */
	with_pointer(&a[0]);
	for(int i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	/* Address of the first element is passed. */
	with_array(&a[0]);
	for(int i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
	printf("\n");


	with_pointer(a);
	for(int i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}

	return 0;
}