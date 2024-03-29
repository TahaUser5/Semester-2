#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter num in sec=";
	cin>>x;
	if(x>=60)
	cout<<x/60<<" minutes \n";
	if(x>=3600)
	cout<<x/60<<" hours\n";
	if(x>=86400)
	cout<<x/86400<<" days";
	return 0;
}