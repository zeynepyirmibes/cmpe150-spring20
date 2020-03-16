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
* Example [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Lab%20Exercises/LabEx1_while.c)

![while loop](https://cdn.journaldev.com/wp-content/uploads/2017/10/while-loop-java.png "while loop")

```c 
 while (condition){
    statements
 }
```

## for loop

* Very similar to while loop, only the syntax is different. 
* Initilization, condition and update expressions are entered inside for loop. 
* As long as the condition is true, the statements inside the for loop are executed repeatedly. 
* Example [here](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Lab%20Exercises/LabEx2_for.c)

![for loop](https://cdn.programiz.com/sites/tutorial2program/files/c-for-loop.jpg)

```c 
 for (initialize; condition; update){
    statements
 }
```

## Questions

### [Q1 - Average/Min/Max](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q1.c)

* Take three integers from the user. Print the average, minimum and maximum of the numbers.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  7 5 6   | 6.0 5 7 |

<br>

### Q2 - Print *

* **[Q2a](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q2a.c):** Write a program that prints 10 stars ('*') next to each other to the screen.

* **[Q2b](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q2b.c):** Write a program that reads an integer N. Print N stars using **while**.

* **[Q2c](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q2c.c):** Write a program that reads an integer N. Print N stars using **for**.

<br>

### Q3 - Numbers

* **[Q3a](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q3a.c):** Write a program that reads an integer N and prints numbers from 1 to N to the screen.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | 1 2 3 4 5  |
|  2   | 1 2  |

* **[Q3b](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q3b.c):** Write a program that reads an integer N and prints numbers from N to 1 to the screen.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | 5 4 3 2 1  |
|  2   | 2 1  |

<br>

### Q4 - Until *

* **[Q4a](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q4a.c):** Take an input char from the user, until '*' is met. 

* **[Q4b](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q4b.c):** Take an input char from the user, count the lowercase letters in this sequence until * is met.

### [Q5 - Even Numbers](https://github.com/zeynepyirmibes/cmpe150-spring20/blob/master/Week%205/Questions/Q5.c)

* Write a program that reads two integers A and B. Then prints the sum of even numbers between A and B.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  3 8   | 10 |
|  2 13   | 40  |
|  3 5   | 4  |


