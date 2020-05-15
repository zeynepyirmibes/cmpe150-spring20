#include <stdio.h>
#include <string.h>

int compare(char a[],char b[]){
	int i;
	for(i =0;a[i]!='\0' && b[i]!='\0';i++){
		if(a[i]!=b[i])
			break;
	}
	return a[i] - b[i];
}

int main(){
	char a[]="abz";
	char b[]="abc";

	printf("%d %d",compare(a,b),strcmp(a,b));

    return 0;
}
