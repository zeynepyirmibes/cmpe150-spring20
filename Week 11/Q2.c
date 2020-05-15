#include <stdio.h>
#include <string.h>
#define MAX 50

void copystr(char src[],char dest[]){
	int idx = 0;
	while(src[idx]!='\0'){
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
}

int main(){
	char source[MAX],destination[MAX];
	char xx[MAX];
	fgets(source, MAX, stdin);
	copystr(source,destination);

	printf("Source string: %s",source);
	printf("Destination string: %s",destination);

	strcpy(xx,source);
	printf("From strcpy %s",xx);

    return 0;
}
