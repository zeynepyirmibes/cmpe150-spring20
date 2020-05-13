# Week 11 Notes - 14.05.2020
---

## A Brief Summary of Strings

![String in C programming](https://media.geeksforgeeks.org/wp-content/uploads/finnnal.png)

* String is a character array: char str[101];
* Ends with the null character ('\0').
* char str[] = "Hello"; = char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
* We use the %s identifier for strings. 

**Single quotes for characters, double quotes for strings!**

### Initializing Strings

There are a few ways to initialize strings: 

 ```c
char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};
 ```

* No need to track size of it. 

### Assigning Values to Strings

* Arrays and strings do not support the assignment operator once it is declared:

 ```c
char c[100];
c = "C programming";  // Error! array type is not assignable.
 ```
* Instead, we can use the **strcpy()** function from the string.h library. 

* `char* strcpy(char* destination, const char* source);`
 
* The strcpy() function copies the string pointed by source to the destination.
* The strcpy() function also returns the copied string.
```c
char c[100];
// copying "C programming" to c
strcpy(c, "C programming");
```

### Reading Strings - scanf()

**scanf** reads the string until space.

```c
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
```
**Output:** <br>Enter name: Dennis Ritchie <br>
Your name is Dennis.

### Reading Strings - gets(), fgets()

* **gets** reads the string until enter. 

```c
#include<stdio.h>
int main()
{
  char str[100];
  printf("Enter a string: ");
  gets(str);
  printf("The Entered string : %s\n",str);
  return 0;
}
```

* It's safer to use: **fgets**

```c
#include<stdio.h>
int main()
{
   char str[100];
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   printf("The entered string: %s",str);
   return 0;
}
```

* The gets() and fgets() do not work the same. The gets() function converts newline character to the end-of-string character (‘\0’) but fgets() don’t convert newline character, it puts a newline character in the string and appends an end-of-string character (‘\0’).

![gets](https://i1.wp.com/www.knowprogram.com/wp-content/uploads/2019/10/read-string-using-gets-fgets.png?w=693&ssl=1)

* You can refer to: [Useful Link for Reading and Printing Strings](https://www.knowprogram.com/c-programming/read-and-display-the-string-in-c-programming/)

### Printing Strings - printf(), puts()

* We use the %s identifier for strings. 
* `printf("%s\n", str);`  is equivalent to  `puts(str);`

### Passing strings to functions

* Same as arrays: pass by reference.
* No need to pass the size. 

```c
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
```

### Built-in string library: string.h

* #include <string.h>
* strlen(): Length of a string
  * The size of a string, not counting the terminating zero '\0'.
* strcpy() and strncpy(): Copy strings
  * `char *strcpy(char *s1, const char *s2); `
  * `char *strncpy(char *s1, const char *s2, size_t n)`
* strcmp() and strncmp(): Compare strings
  * `int strcmp(const char *s1, const char *s2);`
    * Returns < 0 if s1 comes before s2 alphabetically.
    *  Returns 0 if s1 is identical to s2 alphabetically.
    * Returns > 0 if s1 comes after s2 alphabetically.
  * `int strncmp(const char *s1, const char *s2, size_t n);`
  * strcat(), strncat(): Append a string to the end of another
  * `char *strcat(char *s1, const char *s2);`
  * `char *strncat(char *s1, const char *s2, size_t n);`
  
## Questions

### Q1 - Length (Teaching.Codes PS13 - Example 1) 

* Write a function that computes the length of a given string.

|  INPUT  |  OUTPUT |
|-------|-------|
| hello world | 12 |


Hint: Try using strlen function from string.h library.

### Q2 - Copy (Teaching.Codes PS13 - Example 2) 

* Write a function that copies a source string to the destination string. You can assume that (you should ensure that) destination string is large enough:

|  INPUT  |  OUTPUT |
|-------|-------|
| cmpe150 | Source string: cmpe150 <br> Destination string: cmpe150 |

Hint: Try using strcpy function from string.h library.

### Q3 - Compare (Teaching.Codes PS13 - Example 4)

* Write a function that takes two strings as argument and compares them. The function should perform what strcmp function from string.h library. Validate your function by using strcmp along with your function.

|  INPUT  |  OUTPUT |
|-------|-------|
| abz abc | 23 |

### Q4 - Word Count

* Write a program to count the total number of words in a string.

|  INPUT  |  OUTPUT |
|-------|-------|
| count the total number of words in a string | 9 |

### Q5a

* Write a program which takes a string and an integer n as parameters and print the nth word in the string.

|  INPUT  |  OUTPUT |
|-------|-------|
| count the total number of words in a string <br>3 | total |

### Q5b

* Write a program which takes a string and an integer n as parameters and deletes the nth word in the string.


|  INPUT  |  OUTPUT |
|-------|-------|
| count the total number of words in a string <br>3 | count the number of words in a string |

### Q6: Max Character

* Write a program to find the maximum occurring character in a string.

|  INPUT  |  OUTPUT |
|-------|-------|
| She Borrowed the book | o |

Hint: What's the size of ASCII table?

### Q7: Sort

* Write a program which takes a string as parameter and sorts words of this string and prints the resulting string. Assume initial string has maximum 100 characters and the length of each word is at most 10.

Hint: You can use bubble sort algorithm.

|  INPUT  |  OUTPUT |
|-------|-------|
| the lake is a long way from here | a from here is lake long the way |
