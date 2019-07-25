#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	
	int temp;
	for(int i=0;i<n/2;i++)
	{
		for(int j=i;j<n-1-i;j++)
		{
			temp=arr[0+i][j];
			arr[i][j]=arr[n-1-j][i];
			arr[n-1-j][i]=arr[n-1-i][n-1-j];
			arr[n-1-i][n-1-j]=arr[j][n-1-i];
			arr[j][n-1-i]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
}