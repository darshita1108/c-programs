#include<stdio.h>
shellSort(int arr[],int n)
{
	int gap,i,j;
	for(gap=n/2;gap>0;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			int temp=arr[i];
			for(j=i;j>=gap&&arr[j]>=temp;j=j-gap)
			{
				arr[j]=arr[j-gap];
			}
			arr[j-gap=]==arr[j];
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
	 
    shellSort(arr,n);
    
	printf("\nsorted array is\n");
	
	for(i=0;i<n;i++)
	 {
	 printf("%d ",arr[i]);
     } 
     
return 0;
}
