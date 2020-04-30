#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 5;
	char b = 'e'; 
	float c = 9.68;

	int *a_ptr = &a; 
	char *b_ptr = &b;
	float *c_ptr = &c;

	// print the addresses of the variables
	printf("The address of int: %p \n", &a);
	printf("The address of char: %p \n", &b);
	printf("The address of float: %p \n", &c);

	// print the addresses of the pointers
	printf("The address of int*: %p \n", &a_ptr);
	printf("The address of char*: %p \n", &b_ptr);
	printf("The address of float*: %p \n", &c_ptr);

	// print the values of the variables
	printf("The value of int: %d \n", a);
	printf("The value of char: %c \n", b);
	printf("The value of float: %f \n", c);
	
	// print the values of the pointers
	printf("The value of int*: %p \n", a_ptr);
	printf("The value of char*: %p \n", b_ptr);
	printf("The value of float*: %p \n", c_ptr);

	// print the size of the variables
	printf("The size of int: %lu \n", sizeof(a));
	printf("The size of char: %lu \n", sizeof(b));
	printf("The size of float: %lu \n", sizeof(c));

	// print the size of the pointers
	printf("The size of int*: %lu \n", sizeof(a_ptr));
	printf("The size of char*: %lu \n", sizeof(b_ptr));
	printf("The size of float*: %lu \n", sizeof(c_ptr));

	return 0;
}