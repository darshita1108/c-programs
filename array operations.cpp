#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			 {
			 	int temp=a[i];
			 	a[i]=a[j];
			 	a[j]=temp;
			 }
		}
	}
	for(i=1;i<=n;i++)
	 cout<<a[i]<<" ";
}
void insert(int a[],int n)
{
	cout<<"\nenter the item and position\n";
	int item,pos,i;
	cin>>item>>pos;
	for(i=n+1;i>=pos+1;i--)
      {
      	a[i]=a[i-1];
	  }
	  a[pos]=item;
	  cout<<"\narray after insertion\n";
	for(i=1;i<=n+1;i++)
	{
		cout<<a[i]<<" ";
	}
}
void deletion(int a[],int n)
{
  cout<<"\nenter the position to be deleted\n";
  int pos,i;
  cin>>pos;
  for(i=pos;i<=n;i++)
  {
  	a[i]=a[i+1];
  }
  for(i=1;i<=n;i++)
   cout<<a[i]<<" ";
	
}
int main()
{
	
	int n,i;
	cout<<"enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter the array\n";
	for(i=1;i<=n;i++)
	  cin>>a[i];
	cout<<"\narray after sorting\n";
	sort(a,n);
	insert(a,n);
	deletion(a,n);
	
}
