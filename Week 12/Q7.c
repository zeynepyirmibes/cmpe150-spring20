#include <stdio.h>
#include <string.h>

void normalizeString(char s[]){
    if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
        s[strlen(s)-2] = '\0';
    else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int main()
{
    int n;
    char sentence[1001], word[21];

    fgets(sentence, 1000, stdin);
    scanf("%d %s", &n, word);

    normalizeString(sentence);
    normalizeString(word);

    int i;
    int spaceCtr = 1;
    for(i = 0 ; spaceCtr < n && i < strlen(sentence) ; i++){
        if(sentence[i] == ' ')
            spaceCtr++;
    }

    // last word
    if(spaceCtr < n){
    	/*                i
    	 *  is my life now
    	 *  5
    	 *  lemon
    	 */
        sentence[strlen(sentence)+1] = '\0';
        sentence[strlen(sentence)] = ' ';
        strcat(sentence, word);
    }
    else{
    	/*        i
    	 *  is my life now
    	 *  3
    	 *  lemon
    	 */
        char temp[1000] = "";
        strcpy(temp, sentence+i);
        // temp = life now
        strcpy(sentence+i, word);
        // sentence = is my lemon\0ow
        sentence[strlen(sentence)+1] = '\0';
        // sentence = is my lemon\0\0w
        sentence[strlen(sentence)] = ' ';
        // sentence = is my lemon \0w
        strcat(sentence, temp);
        // sentence = is my lemon life now
    }

    printf("%s", sentence);

    return 0;
}
