#include<iostream>
using namespace std;
int main()
{
	int val1,i=1;
	cout<<"Enter value to find it's factor\n";
	cin>>val1;
	cout<<"\nFactor of "<<val1<<" are=";
	while(i<=val1)
	{
		if(val1%i==0)
		{
			cout<<i<<" ";
		}
		i++;
	}
	cout<<endl;
	cout<<"increment "<<i;
}