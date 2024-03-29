#include<iostream>
using namespace std;
int main()
{
	int y,fact=1;
	cout<<"Enter the number to find its factors=";
	cin>>y;
	for(int x=1;x<=y;x++)
	{
		fact=fact*x;
	}
	cout<<"The factor of "<<y<<" is="<<fact;
}