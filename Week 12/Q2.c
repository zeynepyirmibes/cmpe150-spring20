#include <stdio.h>

// do not forget! arrays and pointers can be used interchangebly
int main(){
    int my_array[10] = {1,2,3,4,5};
    int i;

    // remember my_array and &my_array[0] is equivalent, which are addresses.
    // since we can use arrays and pointers interchangebly,
    // *my_array gives us the value held in my_array[0].
    for(i=0;i<5;i++){

        printf("%d %p\n",*(my_array+i),(my_array+i));
        // if we increment the pointer by 1, the returned address
        // = the current adress pointer by the pointer + size of the data type the pointer points to.
        // for example 4 byte for ints, 1 byte for chars.
    }
    return 0;
}
