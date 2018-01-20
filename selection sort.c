#include<stdio.h>
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void selectionSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			 swap(&arr[i],&arr[j]);
		}
	}
}
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array\n");
	int arr[n],i;
	
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 
    selectionSort(arr,n);
    
	printf("\nsorted array is\n");
	
	for(i=0;i<n;i++)
	 {
	 printf("%d ",arr[i]);
     } 
     
return 0;
}

