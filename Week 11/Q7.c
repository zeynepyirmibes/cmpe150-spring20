#include <stdio.h>
#include <string.h>
#define MAX 101

int main(){
	char str[MAX];
	fgets(str, MAX, stdin);

	int length = strlen(str);
	//printf("%d %d %d %d %d \n", length, str[length], str[length-1], '\0', '\n');
	str[length - 2] = '\0'; // needs to be length - 1 in non-Windows Users

	int i, j;
	int num_of_words = 0;
	char words[10][10];
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

	/*
	// Prints words to make sure we are able to split it to words.
	for(i = 0; i <= num_of_words; i++){
		for(j = 0; words[i][j] != '\0'; j++){
			printf("%c", words[i][j]);
		}
		printf("\n");
	}
	*/

	printf("Number of Words: %d\n",num_of_words); // prints words-1

	char temp[10];
	for(i = 0; i <= num_of_words; i++){
		for(j = i+1; j <= num_of_words; j++){
			if(strcmp(words[i], words[j]) > 0){
				strcpy(temp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], temp);
			}
		}
	}

	// print the sentence
	for(i = 0; i <= num_of_words; i++){
		for(j = 0; words[i][j] != '\0'; j++){
			printf("%c", words[i][j]);
		}
		printf(" ");
	}

	return 0;
}
