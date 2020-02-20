# Week 1 Notes - 13.02.2020
---

## C Language

* Case-sensitive
* Every program has one main() function: 

```c 
int main(){
  //code here
  return 0;
}
```

## Including libraries

* In order to use some pre-defined functions, libraries should be included at the start of the program:

```c 
#include<stdio.h>
```

## printf

* Prints output to user. 
* Format: printf("My age is: %d", age)
* Variables can be printed using the format specifiers (int: %d, float: %f, char: %c)
* To use printf, stdio.h library should be included (#include <stdio.h>)

## scanf

* Takes input from user
* Format: scanf("%d%d", &no1, &no2)
* Variables can be taken using the format specifiers (int: %d, float: %f, char: %c)
* The ampersand (&) operator is the address operator. It indicates that the value the user gives, will be written into the address of the variable.
* To use scanf, stdio.h library should be included (#include <stdio.h>)

# Questions

## [Q1 - "Hello World"](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/test/Week%201/Q1_hello_world.c)

Output "Hello World" to screen.

## [Q2 - "Integer Sum"](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/test/Week%201/Q2_int_summation.c)

Take two integers from user, and print the sum. 
