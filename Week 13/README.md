# Week 13 Notes - 28.05.2020
---
  
## Questions

### Q1 - Distance

Define a **struct** representing a point (x, y). 

* Write a function **distance** which takes two points and finds Euclidean distance between these points.  Use *pow()* and *sqrt()* functions from math library *`include <math.h>`*

In main function, take two points from user and print the distance between them. 

| Input          | Output |
| -------------- | ------ |
| 3 0<br />0 4   | 5.00   |
| 11 7 <br />3 21 | 16.12    |

<br>

### Q2 - Extreme Points

Write a program which takes an integer N and reads N points (given by their x and y coordinates) and determines the pair that is the farthest apart. 

*Use the point definition and distance function from the first question*

| Input                                        | Output        |
| -------------------------------------------- | ------------- |
| 3<br/>3 0<br/>0 0<br/>0 4                    | 0,4<br/>3,0   |
| 5 <br/>10 5<br/>4 8<br/>0 8<br/>4 5<br/>-1 2 | -1,2<br/>10,5 |

<br>

### Q3 - Moving Rectangle

Define a **struct** representing a rectangle that are parallel to the axes in a Cartesian coordinate system. Represent a rectangle by its lower left and upper right endpoints using the Point you defined. 

Write a function **move** which takes a rectangle pointer and two integers **moveX** and **moveY** representing the movement in the x and y axes respectively and moves the rectangle. 

**Example**:

* Rectangle:
  * lower left point: (2, 0)
  * upper right point: (8,  4)
* moveX: -5
* moveY: 2
* Resulting Rectangle:
  * lower left point: (-3, 2)
  * upper right point: (3,  6)

<br>

### Q4 - Letter Grades

Define a **struct** representing a student having **student_id (integer), mt_grade (integer), final_grade (integer) and letter_grade (char)**. The given program takes the grades of students and creates structs for students. You are supposed to calculate and set the letter grades of students using **set_grade() function**. The grade weights are 40%, 60% respectively and letter grades are as follows:

* 100-75: A
* 74-50: B
* 49-25: C
* 24-0: F 

|  INPUT  |  OUTPUT |
|-------|-------|
| 1<br>100 40<br>40 100| 1000 B<br>1001 A |
| 3<br>45 25<br>100 100<br>0 90  | 1000 C<br>1001 A<br>1002 B |

```c
#include <stdio.h>

// Fill the definition of the struct.
typedef struct{
  
} Student;

void set_grade(Student *p){

}

int main(void){
    int N;
    scanf("%d", &N);
    Student cmpe150_students[N];
    int i;
    for(i = 0; i < N; i++){
      scanf("%f %f", &cmpe[i].mt_grade, &cmpe[i].final_grade);
      cmpe[i].student_id = 1000 + i;
      // Call set grade function
    }

    for(i = 0; i < N; i++)
        printf("%d %c\n", cmpe[i].student_id, cmpe[i].letter_grade);

    return 0;
}
```

<br>

### Q5 - Flights

Define a struct representing a flight which has following fields:

* Flight number
* Originating airport code (three characters)
* Destination airport code (three characters)
* Starting time
* Arrival time

Write a program which takes an integer N and then reads N flights. Then sorts the flights according to their starting time and the originating airport code. 


| Input                                                        | Output                                                       |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| 4<br />3540 SAW ADB 14 15<br/>3440 IST ESB 13 15<br/>4041 ANT STL 13 21<br/>4045 GTG KPG 17 18 | 4041 ANT STL 13 21<br/>3440 IST ESB 13 15<br/>3540 SAW ADB 14 15<br/>4045 GTG KPG 17 18 |

*Hint 1: Write a function which reads a flight from user.*

*Hint 2: Write a function for comparing two flights. It first checks the starting times and if they are equal then compares the originating airport codes. Funtion can return 1 if the first flight is greater, 0 if equal, -1 otherwise*

<br>

### Q6 - Book Prices

Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer).

Write a program which reads an integer n first, then read page counts, the names and prices of n books.

Write a function which takes an array of books, and sorts them according to their prices.

Using that function, your program should print the names and page counts of each book with the order of their prices. Like:

1. LOT: 528 pages.
2. THG: 727 pages.
3. MSB: 340 pages.
4. etc..

Reading and printing format is up to you.

|  INPUT  |  OUTPUT |
|-------|-------|
| 3<br>727 THG 32<br>528 LOT 15<br>340 MSB 120| LOT: 528 pages - 15 gold<br>THG: 727 pages - 32 gold<br>MSB: 340 pages - 120 gold |

<br>

### Q7 - Family

Define a struct named: Person which has an age, and a salary. Define a struct named: Family which has up to 9 persons and personCount (integer).

Write a function which takes 3 families, and returns the age of the person who earns the most in the family with the least total salary. (age of the richest person in the poorest family)
