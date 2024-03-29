#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter in seconds:";
	cin>>a;
	b=a/60;
	cout<<"Minutes:"<<b;
	b=a/60/60;
	cout<<"\nHours:"<<b;
	b=a/60/60/24;
	cout<<"\nDays:"<<b;
	return 0;
}