// An example of float inequality
#include <stdio.h>
#include <math.h>

int main()
{
	double x = sqrt(2.0);
	double y = x * x;
	if (y == 2.0) {
		printf("sqrt(2) * sqrt(2) is 2 \n");
	}
	else {
		printf("sqrt(2) * sqrt(2) is not 2. It is %lf \n" , y);
	}

    return 0;
}
