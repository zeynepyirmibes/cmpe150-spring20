/* Write a function mulTable, that takes an integer as input, and prints this number's multiplication table.
 * This function shouldn't return anything.
 * Organize the main function to see the result.*/

#include <stdio.h>

void mulTable(int x){
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", x, i, x*i);
    }
}

int main() {
    int number;

    scanf("%d", &number);

    mulTable(number);

    return 0;
}
