# Week 7 Notes - 16.04.2020
---

<details>

<summary>Functions - a summary </summary>

* In C, we can divide a large program into the basic building blocks known as function. 

* The function contains the set of programming statements enclosed by {}.

* So, we can say that a function is a set of statements that takes inputs, does some specific computation and produces an output.

* We can "call" the function using its name.

```c 
return_type function_name(data_type parameter...){  
	//code to be executed  
}
```

### Important notes:

* If we want to call a function inside main, we need to declare this function beforehand. Otherwise, the compiler will give out errors, indicating that the function is called before its declaration. Examine the example below.

### Example: 

* We write a function that tells if an integer is even or odd and we use this function inside main.

* We first make a **function declaration**. The statements inside the function are not specified here, but only its parameters, its name and return type. 

* Now inside main, we can **call the function** whenever we want. When we call the function, its return value can be stored in a variable, and thus used (in this case it is stored in flag).

* Afterwards, right below main, we make the **function definition**, where we define what the function is going to do. 

```c 
#include<stdio.h>  

// Function declaration
int even_odd(int);  

int main(){  
 	int n,flag=0;  
 	printf("\nGoing to check whether a number is even or odd");  
	 printf("\nEnter the number: ");  
	 scanf("%d",&n);  
	 
	 flag = even_odd(n);    // Function call
	 
	 if(flag == 0)  
	 {  
		printf("\nThe number is odd");  
	 }  
	 else   
	 {  
		printf("\nThe number is even");  
	 }  
	 return 0;
}  

// Function definition
int even_odd(int n)  
{  
    if(n % 2 == 0)  
    {  
        return 1;  
    }  
    else   
    {  
        return 0;  
    }  
}  
```

* We could have also directly defined the function before main, in which case we do not write the function declaration, but only the function definition before main. 

</details>

## Questions

### Q1 - Power (Teaching Codes Lab5-Ex11)

* Write power function which takes two integer numbers a and b, then calculates and returns a^b. 

* Then write main() appropriately to see the result. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 4 | 625 |
| 2 20 |  1048576  |

### Q2 - Min/Max

* Write two functions: **min()** and **max()**. Each function should take two integers as inputs. min() should return the smallest of the two, and max() the largest. 

* Then organize the main function, so that it takes two integers from the user. Call the functions that you've written, and print the min and the max integer. If they are equal, then it should print "Equal". 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  98 5   | Min: 5 Max: 98 |
|  4 6   | Min: 4 Max: 6 |
|  3 3   | Equal |

### Q3 - Permutation

* Write a factorial function, that takes an integer n as input, and returns n!. 

* Afterwards, write a permutation function, that takes two integers n, k as input, and returns P(n,k)=n!/(n-k)!. You should use your factorial function inside the permutation function. 

* Then organize the main function, to take two integers from the user, and prints the permutation. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 3 | 60 |
| 10 2 |  90 |
| 5 5 |  120 |
| 7 0 |  1 |

### Q4 - Clock (Teaching Codes Lab5-Ex3)

* Write a function named **printAsTime** which reads hours, minutes, and seconds as three integers, then prints it to the screen as shown in the examples. This function shouldn't return anything. 
* Assume no invalid input will be given (like 92 minutes or -2 hours). 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 12 3 | 05:12:03 |
| 3 0 22 |  03:00:22  |

### Q5 - To Upper (Teaching Codes Lab5-Ex2)

* Write a function named **toUpper** which takes a char as input, and returns the upper case version of the character if it is a lower case letter. Otherwise it should return the same character. 

* Then write a program which reads a word from the user, and prints it with upper case characters. Assume valid words will be given. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| pink | PINK |
|  fLOYd | FLOYD |

<br>

### Q6 - Rectangle (Teaching Codes Lab5-Ex8)

* Write a function that takes two integers as parameters n and m, and prints out a rectangle nxm using '*'s. This function shouldn't return anything.

* Then write main() appropriately to see the result. 

**Input:** <br>
2 3 <br>
**Output:**  <br>
```c 
***
***
```

**Input:** <br>
3 7 <br>
**Output:** <br>
```c 
*******
*******
*******
```

### Q7 - Fibonacci (Teaching Codes Lab5-Ex16)

* Write a function that will take a positive integer n, and returns the nth fibonacci number. 

* Then write main appropriately to see the result. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 1 | 0 |
| 2 |  1 |
| 3 |  1  |
| 4 |  2  |
| 5 |  3  |
| 10 |  34  |
| 15 |  377  |

### Q8 - Fetch Digit (Teaching Codes Lab5-Ex1)

* Write a function named **fetchDigit** which takes two integers as input: number and n. Function should return the nth digit (from the right) of the number as an integer. If the number is less than n digits, Function should return -1.

* Then write a program which reads a positive integer z and another integer x, then print out the xth digit of z. If the input is incorrect (z doesn't have x digits), program should print "Incorrect input". Assume negative integers will not be given.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 23423 3 | 4 |
| 204602 5 | 0 |
| 52 9 | Incorrect input |


### Q9 - Reverse (Teaching Codes Lab5-Ex7)

* Write a function that will take an integer number and return its reverse version as another integer. 

* Then fill main() appropriately to see the result. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 1234 | 4321 |
| 68436 | 63486 |

### Q10a - Perfect Number (Teaching Codes Lab5-Ex12)

* Write a function that will take an integer n, and returns 't' if it's a perfect number. Otherwise the function should return 'f'. 

 * Perfect Number: a positive integer that is equal to the sum of its positive divisors excluding the number itself. 

* Then write main appropriately to see the result. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 6 | t |
| 28 |  t  |
| 8128 |  t  |
| 5 |  f  |
| 1324 |  f  |

### Q10b - Perfect Numberssz

* Take two integers from the user. Using the function you've written in Q10a, print the perfect numbers between the two numbers. (Assume first number is smaller than the second)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 1 10 | 6 |
| 10 10000 |  28 496 8128  |
| 30 400 |  <br>  |


