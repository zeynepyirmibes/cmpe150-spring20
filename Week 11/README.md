# Week 11 Notes - 14.05.2020
---

## A Brief Summary of Strings

![String in C programming](https://media.geeksforgeeks.org/wp-content/uploads/finnnal.png)

* String is a character array: char str[101];
* Ends with the null character ('\0').
* char str[] = "Hello"; = char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

**Single quotes for characters, double quotes for strings!**

* No need to track size of it. 

  * ```c
    char str[] = "Hello World!";
    for(int i=0; str[i] != '\0'; i++)
    	printf("%c-", str[i]);
    ```

### Output

* `printf("%s\n", str);`  =  `puts(str);`

### Input

* `char str[101];`

* `gets(str); // Reads until enter`

* `scanf("%s", str); // Reads until space`

* **Safer**: `fgets(str, 21, stdin);`

* You can refer to: [Useful Link for Reading and Printing Strings](https://www.knowprogram.com/c-programming/read-and-display-the-string-in-c-programming/)

### Passing strings to functions

* Same as arrays: pass by reference.
* No need to pass the size. 

### Built-in string library

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

* Write a function that compute the length of a given string.

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
| count the total number of words in a string 3 | total |

### Q5b

* Write a program which takes a string and an integer n as parameters and deletes the nth word in the string.


|  INPUT  |  OUTPUT |
|-------|-------|
| count the total number of words in a string 3 | count the number of words in a string |

### Q6a

* Write a program to find maximum occurring character in a string assume all characters in lowercase.

|  INPUT  |  OUTPUT |
|-------|-------|
| she borrowed the book | o |

### Q6b

* Update your program so that it would work with all characters not only lowercase ones.

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
