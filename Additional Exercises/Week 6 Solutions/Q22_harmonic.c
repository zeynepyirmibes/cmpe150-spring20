/* Write a program in C to display the n terms of
 * harmonic series and their sum. */

#include <stdio.h>

int main()
{
    int N, i;
    float harmonic_sum = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        harmonic_sum += 1.0/i;

        if(i != N){
            printf("1/%d + ", i);
        }
        else{
            printf("1/%d = %f", i, harmonic_sum);
        }

    }

    return 0;
}
