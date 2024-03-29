#include <iostream>
using namespace std;
int main()
{
	int val1 , val2;
	cout<<"Enter the starting value\n";
	cin>>val1;
	cout<<"Enter the ending value\n";
	cin>>val2;
	while(val1<=val2)
	{
		val1++;
		cout<<"  "<<val1;
		val2--;
	}
}
