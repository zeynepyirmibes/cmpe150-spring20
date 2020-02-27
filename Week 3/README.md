# Week 3 Notes - 27.02.2020
---

## printf Precision

* printf has a default decimal precision of 6. 
* In order to change this, we can type: 
* You can reach the Printf Precision exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx1_precision.c)

```c 
printf("%.2f", number);   // We print with a precision of 2
```

## Implicit Casting

* Conversion of data types without losing its original meaning.
* Done by the compiler on its own.
* You can reach the Implicit casting exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx2_implicit_casting.c)

```c 
int x = 78;  // x has value of 78
float y = x;  // y has value of 78.0
```

## Explicit Casting

* Also called type casting and it is user defined
* (type) expression   --> where type is a variable type (int, float, double, char etc.)
* You can reach the Explicit casting exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx3_explicit_casting.c)

```c 
double x = 1.2; 
int sum = (int)x + 1; // Explicit conversion from double to int 
```

## limits.h

* This is a library where the maximum and minimum values of all variable types are stored. 
* It can be used/included by #include <limits.h>
* CHAR_MIN, INT_MIN, INT_MAX

## Overflow

* If we exceed the maximum value of a variable (can be checked using the limits.h library), we get an integer overflow. 
* If we need to use too large or too small values, we might prefer to use long instead of int, or double instead of float. 
* You can reach the Overflow exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx4_overflow.c)

## Characters & ASCII codes

* Characters are defined using apostrophes ' (NOT quotation marks ", these are used for strings)
* Each character has a corresponding ASCII code (can be found in Lab Slides, or via Google) 
* You can reach the character exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx5_character.c)

```c 
char ch = 'b';
```

## Constants 

* Defined at the start of the program
* Should be uppercase by convention

```c 
#define PI 3.14
```

## More Operators

* Post-increment : a++
* Pre-increment : ++a
* Post-decrement : a--
* Pre-decrement : --a

* a += 4    equivalent to     a = a + 4
* a *= 4    equivalent to     a = a * 4

* You can reach the post/pre increment exercise done in lab [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Lab%20Exercises/LabEx6_post_pre_increment.c)

# Questions

If you have solved the questions through Teaching Codes, saved and logged out, you can access your own solutions in your own computer.  

## [Q1 - Characters & ASCII Codes](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Questions/Q1.c)

* Teaching Codes PS3 - Ex3
* Write a program that reads a character variable from the user, then prints the character and its ASCII code (integer value corresponding to that character) on screen.

## [Q2 - To Uppercase](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Questions/Q2.c)

* Teaching Codes Lab2 - Ex2
* Write a program which reads a lower-case char (character) from the user, then prints its upper-case version on the screen. 

## [Q3 - Area & Circumference](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%203/Questions/Q3.c)

* Teaching Codes PS4 - Ex1
* Write a program which reads the radius of a circle and then calculates circumference and area (utilizing a defined PI).

