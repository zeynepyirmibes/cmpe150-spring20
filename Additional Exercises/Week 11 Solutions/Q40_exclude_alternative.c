#include <stdio.h>
#include <string.h>
#define MAX 100

void crop_newline(char str[]){
	int i=0;
	while(str[i] != '\r' && str[i] != '\n'){
		i++;
	}
	str[i] = '\0';
}

int main()
{
    int i, j = 0;
    char str[100], words[10][10], word[10];
    fgets(str, MAX, stdin);
    crop_newline(str);

	int num_of_words = 0;
	int word_index = 0;

	for(i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){			// if space it is end of the word
			words[num_of_words][word_index] = '\0';
			num_of_words++;
			word_index = 0;
		}
		else						// if not space, copy the letters of the word
		{
			words[num_of_words][word_index] = str[i];
			word_index++;
		}
	}
	words[num_of_words][word_index] = '\0';

    // Assume words will not be longer than 10
    fgets(word, 10, stdin); 
    crop_newline(word);

    /* Comparing the string with the given word */

    for (i=0; i<=num_of_words; i++)
    {
	if (strcmp(words[i], word) == 0)
	{
	    for (j=i; j<=num_of_words; j++)
			{
				strcpy(words[j], words[j + 1]);
			}
		num_of_words--;
	}

    }

    for (i=0; i<=num_of_words; i++)
    {
	printf("%s ", words[i]);
    }

    return 0;
}