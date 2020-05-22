
#include <stdio.h>

int main(){
    int my_array[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //my_array is a 2D array

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            printf("%d %p ",*(*(my_array + i) + j), (*(my_array + i) + j));
            // *(my_array + i) is the ith row of the 2D array
            // let's say ptr = *(my_array + i)
            // then *(ptr + j) would be equal to *(*(my_array + i) + j)
            // *(ptr + j) is simply accessing the jth element of the array that ptr points to
        }
        printf("\n");
    }
    return 0;
}

// for visualization https://i1.wp.com/aticleworld.com/wp-content/uploads/2018/04/2darray.jpg?resize=678%2C495&ssl=1