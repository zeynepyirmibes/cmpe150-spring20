#include <stdio.h>

void read_2d_array(int N, int M, int arr[N][M])
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			scanf("%d", &arr[i][j]);

	}
}
int main(void) {

	int N, i, j;
	int left_sum = 0, right_sum = 0;

	scanf("%d",&N);

	int arr[N][N];

	read_2d_array(N, N, arr);

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i == j)
			   left_sum += arr[i][j];
			if(i == N-1-j)
			  right_sum += arr[i][j];
		}
	}
	printf("The sum of the left diagonal: %d\n",left_sum);
	printf("The sum of the right diagonal: %d\n",right_sum);

	return 0;
}
