#include <stdio.h>
#include <stdlib.h>
#define MAX 150


void worderaser(char str1[], int x,char str2[])
{
	int wcounter =1;
	int i=0;
	int idx2 = 0;

	if(x==1)
	{
		// copy until first space
		while(str1[i]!='\0' && str1[i]!=' ' ){
			i++;
		}
		i++;  // for the space character
		while(str1[i]!='\0'){
			str2[idx2] = str1[i];
			idx2++;
			i++;
		}
		str2[idx2] = '\0';
		return;

	}

	// find the beginning of the words
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==' ')
		{
			//write the space character
			str2[idx2] = str1[i];
			idx2++;

			//increment the word counter
			wcounter++;
			if(wcounter == x){
				i++;
				while(str1[i]!=' ' && str1[i]!='\0'){
					i++;
				}
			}
		}
		else{
			str2[idx2] = str1[i];
			idx2++;
		}
	}

	// finish string
	str2[idx2] = '\0';
}

int main(void) {
	char str1[MAX],str2[MAX];
	int num;
	fgets(str1,MAX,stdin);
	scanf("%d",&num);
	worderaser(str1,num,str2);
	printf("%s",str2);

	return 0;
}
