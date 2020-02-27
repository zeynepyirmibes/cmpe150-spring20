// An example of explicit conversion
#include<stdio.h>
int main()
{
    float x = 5.435656;    // float x
    int y; // integer y
    y = (int)x;  //we convert x into an integer,
    			//and set it to y
    			//x is explicitly converted to an int
    printf("x = %f, y = %d \n", x, y);

    int a = 72;    // integer a
    float b; // float b
    b = (float)a;  //we convert a into a float,
    			//and set it to b
    			//a is explicitly converted to a float
    printf("a = %d, b = %f \n", a, b);

    return 0;
}
