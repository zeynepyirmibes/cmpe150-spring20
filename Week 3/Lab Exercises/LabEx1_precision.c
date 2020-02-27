#include <stdio.h>
/* Precision */

int main(){

	float a = 7.945387;
	printf("Default precision is 6: %f \n",a);
	printf("If we want 5: %.5f \n",a);
	printf("If we want 4: %.4f \n",a);
	printf("If we want 3: %.3f \n",a);
	printf("If we want 2: %.2f \n",a);
	printf("If we want 1: %.1f \n",a);
	printf("If we want 0: %d \n",(int)a);

	return 0;
}
