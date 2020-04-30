#include <stdio.h>

int main(){

    int a = 7;
    int *a_ptr = &a;

    printf("a = %d \n", a);
    printf("Address of a = %p \n\n", &a);

    printf("a_ptr = %p \n", a_ptr); // which is the address of the variable a 
    printf("Address of a_ptr = %p \n", &a_ptr); // which is just a random memory address, allocated for a_ptr
    printf("What a_ptr points to = %d \n", *a_ptr); // which is the value of the variable a 

    return 0;
}