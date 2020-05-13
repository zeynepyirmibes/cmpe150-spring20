#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//write the function here
int eraser(int a1[],int n,int a2[], int m)
{	int tmp[MAX],index=0;		// create a temporary array and keep track of the index
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<m;j++){	
			if(a2[j]==a1[i]){	// if ith element of a1 equals to jth element of a2 break
				break;
			}
		}
		if(j==m)				// if we did not break the previous loop, a1's ith element is not exist in a2
		{						// so add it to the new array
			tmp[index] = a1[i];
			index++;			// increase the index so you do not overwrite
		}
	}
	for(int i=0;i<index;i++){	// copy contents of tmp to a1
		a1[i] = tmp[i];
	}
	return index;
}
int main(void) {
	//read the arrays and call the function,
	//then print the updated array
	int n,m,a1[MAX],a2[MAX];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&a2[i]);
	}
	int newSize = eraser(a1,n,a2,m);
	printf("New Size:%d\n",newSize);
	for(int i=0;i<newSize;i++){
		printf("%d ",a1[i]);
	}
	return 0;
}