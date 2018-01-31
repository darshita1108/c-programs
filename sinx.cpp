#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x,s=0,p;
	int i,f,n,j;
	cout<<"\nenter the no of terms and value of x\n";
	cin>>n>>x;
	for(i=1;i<=n;i++)
	{
		p=pow(x,2*i-1);
		f=1;
		for(j=1;j<=2*i-1;j++)
		{
			f=f*j;
		}
		float d=p/f;
		if(i%2==0)
		{
			s=s-d;
		}
		else
		{
			s=s+d;
		}
	}
	cout<<"\nsum of series is\n";
	cout<<s;
}
