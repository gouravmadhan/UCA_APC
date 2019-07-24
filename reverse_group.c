#include <stdio.h>
int main()
{
	int n,k,temp;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i=i+k)
	{
		if(i+k<=n)
		{
			for(int j=0;j<k/2;j++)
			{
				temp=arr[j+i];
				arr[j+i]=arr[i+k-1-j];
				arr[i+k-1-j]=temp;
			}
		}
			else
			{
				for (int j = 0; j < (n-i)/2; j++)
				{
					temp=arr[j+i];
				arr[j+i]=arr[i+k-1-j];
				arr[i+k-1-j]=temp;
				}
			}
	}

	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("%d ",arr[i] );
	}
}
