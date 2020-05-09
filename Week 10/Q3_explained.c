#include <stdio.h>

void swap(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}
int main(void) {

	int N, i, j, k;

	scanf("%d",&N);

	int arr[N];

	for(i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for(i = 0; i < N-1; i++)
	{
		for(j = 0; j < N - i - 1; j++)
		{
			printf("%d, %d ", arr[j], arr[j+1]);
			if(arr[j] > arr[j + 1]){
				swap(arr, j , j + 1);
				printf(" --swapped");
				printf("\n");
				for(k = 0; k < N; k++)
					printf("%d ", arr[k]);
			}
			printf("\n");
		}
		printf("At the end of %dth pass: ", i + 1);
		for(k = 0; k < N; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}


	return 0;
}
