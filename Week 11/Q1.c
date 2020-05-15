#include <stdio.h>
#include <string.h>
#define MAX 50

int length(char arr[]){
	int size = 0;
	while(arr[size]!='\0'){
		size++;
	}
	return size;
}

int main(){
	char arr[MAX];

	fgets(arr,MAX,stdin);
	//gets(arr);

	int i;

	int len = length(arr);
	// Notice that fgets takes \n also
	printf("Length of %s is %d %lu\n",arr,len,strlen(arr));

    return 0;
}
