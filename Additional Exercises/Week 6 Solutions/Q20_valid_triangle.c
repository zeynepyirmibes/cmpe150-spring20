/* Write a C program that takes three sides of a triangle and
 * check whether the triangle is valid or not.
 * (Apply the rule (side1 + side2 > side3) to all sides) */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input three sides of a triangle */
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2)
            {
                /*
                 * If side1 + side2 > side3 and
                 *    side2 + side3 > side1 and
                 *    side1 + side3 > side2 then
                 * the triangle is valid.
                 */
                printf("Valid");
            }
            else
            {
                printf("Invalid");
            }
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
