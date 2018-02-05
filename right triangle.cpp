#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the sides of a triangle"<<endl;
	cin>>a>>b>>c;
	a=a*a;
	b=b*b;
	c=c*c;
	if((a+b==c)||(b+c==a)||(c+a==b))
	{
		cout<<endl<<"right triangle";
	}
	else
	{
		cout<<endl<<"not a right triangle";
	}
return 0;
}
