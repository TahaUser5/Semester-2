#include <iostream>
using namespace std;
int main()
{
	int b,p=1,ex,i=1;
	cout<<"Enter base number=";
	cin>>b;
	cout<<"Enter power of a number=";
	cin>>ex;
	while(i<=ex)
{
 	i++;
	p=p*b;
}
 	cout<<b<<"^"<<ex<<"="<<p;
}