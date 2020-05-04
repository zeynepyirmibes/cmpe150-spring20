#include <stdio.h>

void cubeByReference(int *num){
    *num = (*num) * (*num) * (*num); //could also be written as: *num = *num * *num * *num
}

int main() {
    int x;
    scanf("%d", &x);

    cubeByReference(&x);

    printf("%d", x);

    return 0;
}
