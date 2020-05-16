#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char str[MAX], longest[MAX], smallest[MAX], current[MAX];
    int i, j = 0, longest_length = 0, smallest_length = MAX, current_length;

    fgets(str, MAX, stdin);

    for(i = 0; str[i] != '\0'; i++){
    	if(str[i] == ' ' || str[i] == '\n'){
    		//We have reached a word, we add null character to its end
    		current[j] = '\0';
			current_length = strlen(current);

			//printf("Word: %s, length = %d \n", current, current_length);
    		
    		// If current word is longer than the longest word yet seen
    		if(current_length > longest_length){
    			longest_length = current_length;
    			strcpy(longest, current);
    		}

    		// If current word is smaller than the smallest word yet seen
    		if(current_length < smallest_length){
    			smallest_length = current_length;
    			strcpy(smallest, current);
    		}

    		j = 0; // we must reset the index of the next word

    	}
    	else{
    		current[j] = str[i];
    		j++;
    	}
		
    }

    printf("Largest: %s \n", longest);
    printf("Smallest: %s \n", smallest);

	return 0;
 }