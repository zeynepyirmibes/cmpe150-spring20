/* Take two integers from the user.
 * Using the function you've written in Q10a,
 * print the perfect numbers between the two numbers.
 * (Assume first number is smaller than the second)*/

#include <stdio.h>

char isPerfect(int number){
	int i, sum_of_proper_divisors = 0;

	for(i = 1; i < number; i++){
		if(number%i == 0){
			sum_of_proper_divisors += i;
		}
	}

	if(sum_of_proper_divisors == number){
		return 't';
	}
	else{
		return 'f';
	}

}

int main()
{
	int no1,  no2, i;

	scanf("%d %d", &no1, &no2);

	for(i = no1; i <= no2; i++){
		if(isPerfect(i) == 't'){
			printf("%d ", i);
		}
	}

	return 0;
}
