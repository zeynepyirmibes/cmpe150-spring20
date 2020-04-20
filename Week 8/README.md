# Week 8 Notes - 23.04.2020
---

<details>

<summary>Functions (Call by Reference) </summary>

<br>

* In call by reference, the address of the variable is passed into the function call as the actual parameter. 
* The value of the actual parameters can be modified (as opposed to Call by Value).

### Example: 

```c 
#include <stdio.h>
void increment(int  *var)
{
    /* We are performing the increment on variable var, 
   *  Since var is a pointer that holds the address
     * of variable num, the increment is actually done
     * on the address where value of num is stored. */
   
    *var = *var+1;
}
int main()
{
     int num=20;
     /* This way of calling the function is known as call by
      * reference. Instead of passing the variable num, we are
      * passing the address of variable num
      */
     increment(&num);
     printf("Value of num is: %d", num);
   return 0;
}
```

</details>

<details>

<summary>Pointers </summary>

![](figures/W08-ptr1.png)

---

![](figures/W08-ptr2.png)

---

![](figures/W08-ptr3.png)


<br>

</details>

## Questions

### Q1 - Understanding Pointers (*)

* Write a C program that declares and initializes (to any value you like) a
float, an int, and a char. Next declare and initialize a pointer to each of
the three variables. Your program should then print the address of, and value
stored in, and the memory size (in bytes) of each of the six variables.

* Use the **"%p"** formatting specifier to print addresses in hexadecimal. You should see addresses that look something like this: "0xbfe55918". The initial
characters **"0x"** tell you that hexadecimal notation is being used; the remainder of the digits give the address itself. 

* Use the **sizeof** operator to determine the memory size allocated for each variable (**"%lu"** for printing sizes). 

**Sample Output:**

*The addresses will be different when you run your program.*   

<img src="figures\1587302715055.png" style="zoom:50%;" />

### Q2 - Swap (Teaching Codes Lab6-Ex1)

* Write a function named swap which takes two integer pointers (addresses of two integers) and swaps the values in those two addresses. (Since this function doesn't need to return a value, it should be a void function.) 
* In the main program, create two integer variables a and b, then read their values from the user. Then call the swap function with the addresses of these two integers, and print their values again to see if they are really swapped.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 8 9 | 9 8 |
| 12 5 | 5 12 |


### Q3 - Number Alteration

In the main function, one integer number and a char are read from the user into the variables x and c respectively. Complete the program by writing the function alter.

**alter** function takes one integer pointer (address of an integer) and one char variables as parameters. Function does the following operations:
* If char parameter is 'i', then increase the integer pointer parameter by one.
* If char parameter is 'd', then decrease the integer pointer parameter by one.
* If char parameter is 's', then assign the square of the integer pointer parameter to itself.
* Otherwise, do not change anything.

In the main function send variables x and c to the **alter** function and then print x.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 22 i | 23 |
| -4 d | -5 |
| 20 s | 400 |
| 20 j | 20 |

<br>

```c
#include <stdio.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main()
{
    int x;
    char c;
    
    scanf("%d %c", &x, &c);
    
    alter(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
        );
        
    printf("%d", x);
    return 0;
}
```

<br>

### Q4 - Divide with Remainder (Teaching Codes Lab6-Ex2)

* Write a function named **divideWithRemainder** which takes two integer values: **number** and **divisor**, and two integer pointers (addresses of two integers): **result** and **remainder**. This function should divide the number by divisor, then write the result into the address given by result, and write the remainder into the address given by remainder. 

* In the main program, create four integers: a,b,c,d. Then read the values of a and b from the user. Then call the function with the values of a and b, and the addresses of c and d, respectively. Your function will divide a by b, and the value of c will be the result, and the value of d will be the remainder. Print the values of c and d as given below:

* This function shouldn't return anything. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 8 3 | 2 2 |
| 27 4 | 6 3 |
| 10 2 | 5 0 |

### Q5 - Powered Sums

In the main function, two integer numbers are read from the user into the variables a and b respectively. Complete the program by writing two functions named **sums** and **powered**.

**sums** takes two integers (a and b) and an integer pointer (\*sum). The function should store the sum of these two integers in \*sum pointer.

**powered** takes three integers (sum, a and b) and two integer pointers (\*sum_p1 and \*sum_p2). The function should store the a^{th} power of the sum in \*sum_p1 and b^{th} power of the sum in \*sum_p2. 

Output:

First Line: Sum of two numbers

Second Line: a^{th} power of the a+b and  b^{th} power of the a+b

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 6 1 | 7<br>117649 7 |
| 4 4 | 8<br>4096 4096 |
| 5 0 | 5<br>3125 1 |

<br>

```c
#include <stdio.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(){
  int a, b;
  scanf("%d %d",&a,&b);

  int sum;
  sums(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
  );
  printf("%d\n",sum);

  int sum_p1,sum_p2;
  powered(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE);
  );
  printf("%d %d", sum_p1, sum_p2);

  TC_END;
    return 0;
}

```

<br>


## References

**\*** http://www.csc.villanova.edu/~mdamian/Past/csc2400fa13/assign/plab.pdf
