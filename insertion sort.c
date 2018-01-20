#include<stdio.h>
insertionSort(int arr[],int n)
{
	int key,i,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while((j>=0)&&(arr[j]>key))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void main()
{
	int n,i;
	printf("enter the ize of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\narray after sorting\n");
	insertionSort(arr,n);
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	
}
