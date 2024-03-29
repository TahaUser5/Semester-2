#include<iostream>
using namespace std;
int main()
{
	char i;
	i=1;
	{
	for(i%5==0;i<=5;i++)
	cout<<"*";
	cout<<endl;
	for(i%5==0;i<=10;i++)
	cout<<"*";
	cout<<endl;
	for(i%5==0;i<=15;i++)
	cout<<"*";
	}
}
