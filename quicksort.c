#include<stdio.h>
int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int pindex=l;
	int j;
	for(j=l;j<r;j++)
	{
		if(arr[j]<=pivot)
		{
			int temp=arr[j];
			arr[j]=arr[pindex];
			arr[pindex]=temp;
			pindex++;
		}
	}
	int c=arr[pindex];
	arr[pindex]=arr[r];
	arr[r]=c;
	return pindex;
}
void quickSort(int arr[],int l,int r)
{
	if(l<r){
	int pindex=partition(arr,l,r);
	quickSort(arr,l,pindex-1);
	quickSort(arr,pindex+1,r);
	}
}

void main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\narray after sorting\n");
	quickSort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	
	
}
