/* Take a maximum of 100 characters from the user.
 * Stop taking inputs when the user enters dot (.),
 * and print the number lowercase, uppercase letters,
 * and the number of digits the user entered.
 * Use break. (Take the characters with enter (newline) between them) */

#include <stdio.h>

int main()
{
    int i;
    int lower_count = 0, upper_count = 0, digit_count = 0;
    char ch;

    scanf("%c", &ch);

    for(i = 0; i < 100; i++){
        if(ch == '.'){
            break;
        }

        if(ch >= 'a' && ch <= 'z'){
            lower_count++;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            upper_count++;
        }
        else if(ch >= '0' && ch <= '9'){
            digit_count++;
        }

        scanf("%c", &ch);
    }

    printf("Lowercase: %d \n", lower_count);
    printf("Uppercase: %d \n", upper_count);
    printf("Digit: %d \n", digit_count);

    return 0;
}
