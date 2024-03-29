#include<iostream>
using namespace std;
int main()
{
	int a,k,i,j;
	cout<<"Enter number of rows: ";
	cin>> a;
	for(i=1;i<=a;i++)
	{
		for(k=i;k<a;k++)
		{
			cout <<" ";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout << "*";
		}
	cout << "\n";
	}
}


