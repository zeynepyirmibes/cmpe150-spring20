# Week 6 Notes - 06.04.2020
---

## do..while loop

* We have learned the while loop in the previous lecture. 
* do..while loop executes in a very similar way. The only difference is that, in the do..while loop, the statements inside the "do" block are executed first. Afterwards, the condition inside the while loop is considered. As long as the condition is true, "do" block keeps executing. 
* To see the difference between while and do..while loop, you can check out this video: https://www.youtube.com/watch?v=TjkJQly2YCw

![do..while loop](https://cdn.journaldev.com/wp-content/uploads/2017/10/java-do-while-loop-1.png)

```c 
 do {
   statements;
 } while( condition );
```

### Example:

```c 
#include <stdio.h>
int main()
{
	int j=0;
	do
	{
		printf("Value of variable j is: %d\n", j);
		j++;
	}while (j<=3);
	return 0;
}
```

## break, continue

* The break statement ends the loop immediately when it is encountered. The break statement is usually used with if...else statement inside the loop. Its syntax is:
```c 
  break;
```
* The continue statement skips the current iteration of the loop and continues with the next iteration. Its syntax is:
```c 
  continue;
```

### Example: 

* Read 100 integers and find their product. However, if one of the numbers is non-positive, stop input.

```c 
#include <stdio.h>
int main()
{
  long int mul=1;
  int i, num;

  for (i=0; i<100; i++) {
    scanf("%d", &num);
    if (num<=0)
      break;
    mul *= num;
  }
  printf("%ld", mul);
	return 0;
}
```

## Nested Loops

* Nested loop means a loop statement inside another loop statement.

```c 
Outer_loop  
{  
    Inner_loop  
   {  
       // inner loop statements.  
   }  
       // outer loop statements.  
}  
```

### Example:

* Display multiplication tables

```c 
#include <stdio.h>  
int main()  
{  
   int n; // variable declaration  
   printf("Enter the value of n :");  
   // Displaying the n tables.  
   for(int i=1;i<=n;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   }  
}
```

## Questions

* You can assume that for input formats like (5 6 -9 0), the numbers are entered by the user like: <br>
5 <br>
6 <br>
-9 <br>
0 <br>

### Q1 - Sum of Factorial (Teaching Codes PS7)

* Write a program that reads an integer value, and computes the sum of the factorial of each digit . The output will be an integer . For example, assume that the user enters "572" as the input integer. For each digit of the integer, you will compute the factorial. Then you will compute the sum of these factorials: 5! + 7! + 2! = 120 + 5040 + 2 = 5162. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  572   | 5162 |
|  27   | 5042 |

<br>

### Q2 - Non-negative Numbers

* Write a program that will take integers as inputs until the user enters a negative number. Then show the user the sum of all the non-negative numbers he/she entered. **(Use do..while with the break statement)**

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  4 7 45 9 2 0 0 5 8 -4   | 80 |
|  1 1 0 1 -1   | 3 |

<br>

### Q3 - Prime Numbers

* Take two integers from the user (assume first is smaller than the second). Print the prime numbers between them. **(Use nested loops)**

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 40 | 3 5 7 11 13 17 19 23 29 31 37 |
| 1 3 | 2 3  |
| 32 36 |  |

### Q4 - Greatest Common Divisor (Teaching Codes Lab4)

*  Write a program that takes 2 integers and prints their greatest common divisor (GCD). 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 12 15 | 3 |
| 47 152 | 1 |
| 333 111 | 111 |

---

### Q5 - Triangles

**Q5a:** Write a program to display a right angle triangle with N number of rows, like below.


**Input:** <br> 5   
**Output:** <br>
1 <br>
12 <br>
123 <br>
1234 <br>
12345

---

**Q5b:** Write a program to display a right angle triangle using the number N, which will repeat the number for that row, like below.

**Input:** <br> 5   
**Output:** <br>
1 <br>
22 <br>
333 <br>
4444 <br>
55555

---

**Q5c:** Write a program to display a right angle triangle with number increased by 1, like below. 

**Input:** <br> 4   
**Output:** <br>
1 <br>
2 3 <br>
4 5 6 <br>
7 8 9 10 <br>

---

### Q6 - Digits (Teaching Codes Lab4)

* Write a program that takes a number and prints its total digit count and also even digit count. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 542175 | 6 2 |
| 24680 | 5 5 |
| 135 | 3 0 |

### Q7 - Continue

* Write a program that takes a maximum of 10 numbers from the user. Calculate the sum of the numbers, skipping negative inputs. **(Use continue)**

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 4 -9 7 6 0 0 -17 2 1| 25 |
| 0 0 0 0 -7 2 0 0 0 0 | 2 |
