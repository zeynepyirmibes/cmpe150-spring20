/* Write a program that takes (X,Y) coordinates from the user,
 * and determines in which quadrant the coordinate point lies. */

#include <stdio.h>

int main(){

    int x, y;

    scanf("%d %d",&x ,&y);

    if( x > 0 && y > 0){
        printf("1st quadrant");
    }
    else if( x < 0 && y > 0){
        printf("2nd quadrant");
    }
    else if( x < 0 && y < 0){
        printf("3rd quadrant");
    }
    else if( x > 0 && y < 0){
        printf("4th quadrant");
    }
    else if( x == 0 && y == 0){
        printf("Origin");
    }

    return 0;
}
