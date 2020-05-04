#include <stdio.h>

void avertCharacter(char *ch){
    if(*ch >= 'a' && *ch <= 'z'){
    	*ch = *ch - ('a' - 'A');
    }
    else if(*ch >= 'A' && *ch <= 'Z'){
    	*ch = *ch + ('a' - 'A');
    }
}

int main() {
    char x;

    scanf("%c", &x);

    avertCharacter(&x);

    printf("%c", x);

    return 0;
}
