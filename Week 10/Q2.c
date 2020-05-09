#include <stdio.h>

void printArray(int len, int arr[]){
	int i;
	for(i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
}

void changeArray(int len, int arr[]){
	int i;
	for(i = 0; i < len; i++){
		arr[i] = arr[i] * i;
	}
}

int main() {
	int N, i;

	scanf("%d", &N);

	int arr[N];

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	changeArray(N, arr);
	printArray(N, arr);

	return 0;
}
