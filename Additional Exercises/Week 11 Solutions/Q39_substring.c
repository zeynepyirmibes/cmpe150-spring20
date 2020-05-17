#include <stdio.h>
#include <string.h>
#define MAX 100

int isSubstring(char str[], char search_str[]){
	int len_str = strlen(str);
	int len_search_str = strlen(search_str);
	int substring_flag, i , j;

	// We search for the substring in string, using windows of length: len_search_str
	for(i=0;i<=len_str-len_search_str;i++)
	{
		for(j=i;j<i+len_search_str;j++)
		{
			substring_flag=1;
			if (str[j]!=search_str[j-i])
			{
				substring_flag=0;
			    break;
			}
		}
		if (substring_flag==1)
			break;
	}
	return substring_flag;
}

void crop_newline(char str[]){
	int i=0;
	while(str[i] != '\r' && str[i] != '\n'){
		i++;
	}
	str[i] = '\0';
}


int main()
{
	char str[MAX],search[MAX];

    fgets(str, MAX, stdin);

	fgets(search, MAX, stdin);
	// We must crop the newline '\n' from the search string
	crop_newline(search);

	printf("%d", isSubstring(str, search));

	return 0;
}
