# Week 5 Notes - 12.03.2020
---

## Repetitive Statements

* A repetitive statement is a statement that allows you to execute one or more other statements multiple times.
* This week we will learn: 
    - while 
    - for 

## while loop

* With the while loop, we can execute a set of statements as long as a condition is true.
* As long as the condition is true, the statements inside the while loop are executed repeatedly. 
* Curly bracket usage is important. As we have seen in conditional statements (if, else..), if we don't use curly brackets, only the first statement below while is executed. 

[![while loop](https://cdn.journaldev.com/wp-content/uploads/2017/10/while-loop-java.png "while loop")](https://cdn.journaldev.com/wp-content/uploads/2017/10/while-loop-java.png "while loop" =20x)

```c 
 while (condition){
    statements
 }
```

## for loop

* Very similar to while loop, only the syntax is different. 
* Initilization, condition and update expressions are entered inside for loop. 
* As long as the condition is true, the statements inside the for loop are executed repeatedly. 

![for loop](https://cdn.programiz.com/sites/tutorial2program/files/c-for-loop.jpg)

```c 
 for (initialize; condition; update){
    statements
 }
```

## Questions

### [Q1 - Average/Min/Max]()

* Take three integers from the user. Print the average, minimum and maximum of the numbers.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  7 5 6   | 6.0 5 7 |

<br>

### [Q2 - Print *]()

* **Q2a:** Write a program that prints 10 stars ('*') next to each other to the screen.

* **Q2b:** Write a program that reads an integer N. Print N stars using **while**.

* **Q2c:** Write a program that reads an integer N. Print N stars using **for**.

<br>

### [Q3 - Numbers]()

* **Q3a:** Write a program that reads an integer N and prints numbers from 1 to N to the screen.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | 1 2 3 4 5  |
|  2   | 1 2  |

* **Q3b:** Write a program that reads an integer N and prints numbers from N to 1 to the screen.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | 5 4 3 2 1  |
|  2   | 2 1  |

<br>

### [Q4 - Until *]()

* **Q4a:** Take an input char from the user, until '*' is met. 

* **Q4b:** Take an input char from the user, count the lowercase letters in this sequence until * is met.

### [Q5 - Even Numbers]()

* Write a program that reads two integers A and B. Then prints the sum of even numbers between A and B.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  3 8   | 10 |
|  2 13   | 40  |
|  3 5   | 4  |


