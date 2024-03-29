#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value:";
	cin>>a;
	if(a>0)
	cout<<"The value is positive";
	else if(a<0)
	cout<<"The value is negative";
	else if(a==0)
	cout<<"The value is zero";
	return 0;
}