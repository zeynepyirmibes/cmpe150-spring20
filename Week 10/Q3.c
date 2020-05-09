#include <stdio.h>

void swap(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}
int main(void) {

	int N, i, j;

	scanf("%d",&N);

	int arr[N];

	for(i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for(i = 0; i < N-1; i++)
	{
		for(j = 0; j < N - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
				swap(arr, j , j + 1);
		}
	}
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}
