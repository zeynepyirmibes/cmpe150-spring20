# Week 4 Notes - 04.03.2020
---

## Comparison Operators

| Operator  | Explanation  |
| :------------ | :------------ |
| >  | Greater than  |
| <=  | Less than or equal to: ≤  |
| >=   | Greater than or equal to: ≥  |
| !=  | Not equal to: ≠  |
| ==  | Equal to  |


* ** Important!** writing = instead of == is a common mistake


## Logical Operators

* || &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;      OR
* &&  &nbsp;&nbsp;&nbsp; AND

## Conditional Statements

* They modify the flow of execution of the C program. 
* Conditional statements are responsible for the 'decision-making' in C.
* They enable executing some portion of the code based on a condition.
* if, else, else if, switch etc.

## If Statement

* The code (instruction) inside the if block will be executed **only if** the condition is met. (Exercises [1]() & [2]())

```c 
 if (x < y){
 	printf("x is smaller"); 
 }
```

## If-Else if-Else Statement

* The code inside the **if** block will be executed only if the condition (x<y) is **True**. 
* The code inside the **else if** block wil be executed only if the condition (x==y) is true. 
* Else, (all cases that are not covered by if, and else if), the code inside the **else** block will be executed.  (Exercises [3]() & [4]())

```c 
 if (x < y)
 {
 	printf("x is smaller"); 
 }
else if (x == y)
{
    printf("they're equal"); 
}
else
{
	printf("x is larger");  
}
```

## NOT Operator !

* Not operator (!) is used to negate an expression. 

```c 
if( !(x==3) ){
	 printf("x is not equal to 3");
}
```
* You must use parenthesis for the expression you want to negate. 
!x==3 would not work.

## Float Equality
* Float equality is not as simple as integer equality. Since floats (and doubles) can be represented with decimal points going to infinity, and since the computer cannot store that long in memory, (2.0 == 2.0) may not be true. (Exercise [5]())

## Switch

* Switch is generally used for multiple conditions. 

<details>
<summary>switch Example 1</summary>
<br>

```c 
#include <stdio.h>

int main()
{
    char card = 'D';
    switch (day) {
        case 'C':
            printf("Clubs\n");
        case 'D':
            printf("Diamonds\n");
        case 'H':
            printf("Hearts\n");
        case 'S':
            printf("Spades\n");
        }

    return 0;
}
```

</details>

<details>
<summary>switch Example 2</summary>
<br>

```c 
#include <stdio.h>
 
 int main() {
    int color = 1;
    printf("Please choose a color(1: red,2: green,3: blue):\n");
    scanf("%d", &color);
 
    switch (color) {
        case 1: 
            printf("you chose red color\n");
            break;
        case 2:
            printf("you chose green color\n");
            break;
        case 3:
            printf("you chose blue color\n");
            break;
        default:
            printf("you did not choose any color\n");
    }
    return 0;
}
```
</details>



<details>
<summary>switch Example 3</summary>
<br>

```c 
#include<stdio.h>

int main(){
    setbuf(stdout,NULL);

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    switch (num){
        case 1:
            printf("one ");
        case 2:
            printf("two" );
        case 3:
            printf("three ");
        case 4:
            printf("four ");
        case 5:
            printf("five ");
        case 6:
            printf("six ");
        default:
            printf("else");
    }

    return 0;
}
```
</details>

<br>


## Questions

### Q1 - Positive/Negative

Write a program that reads an integer. If integer is positive, print "positive", otherwise print "negative".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | positive  |
| -8   | negative  |

<br>

### Q2 - Positive/Zero/Negative

Write a program that reads an integer. If integer is positive, print "positive", if zero, print "zero", otherwise print "negative".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
|  5   | positive  |
|  0   | zero  |
| -8   | negative  |

<br>

### Q3 - Odd/Even

Write a program that reads an integer. If the integer is positive then check if the number is odd or even and then print "odd" or "even", if it is negative then print the absolute value of the number, if it is zero then print "zero".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 4  | even   |
| -5  | 5  |
| 0  | zero  |

<br />

### Q4 - Divisible ( Teaching Codes Lab3 Q5)

Write a program that will take 2 numbers from the user and if the first number is divisible by the second number, your code should print "it is divisible", if it is not divisible, then print "it is not divisible". If any of your numbers are nonpositive, print "Incorrect Input" 


|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 45 5    | it is divisible   |
| 45 6    | it is not divisible  |
| -34 17  | Incorrect Input  |


<br />


### Q5 - Characters

Write a program that will take 1 char from the user. If the char is a lowercase letter print “lowercase”, if the char is an uppercase letter print "uppercase", if the char is a digit (number) print “digit”, otherwise print “nonsense.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| a   | lowercase   |
| Y   | uppercase   |
| 7    | digit  |
| ! | nonsense  |

