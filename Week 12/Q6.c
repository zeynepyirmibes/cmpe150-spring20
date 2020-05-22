#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int N){
    int i, flag=1;                      // flag indicates that str is a palindrome
    for(i=0; i < N/2; i++){             
        if(str[i] != str[N-1-i]){       // if we find only one pair that does not match
            flag =0;                    // then we say that str is not a palindrome
            break;                      // one pair is enough to decide palindromeness, break the loop
        }
    }

    if(flag==1)                         // if flag is 1, we did not find a pair that does not match
        return N;                       // return the string length
    else 
        return flag;                    // str is not a palindrome, return 0
}

int main(void)
{
    char word[50];
    //gets(word);                         // gets does not take '\n' character.
    scanf("%s", word);

    printf("%d", isPalindrome(word, strlen(word)));

    return 0;
}