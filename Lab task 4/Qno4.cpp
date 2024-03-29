#include<iostream>
using namespace std;
int main()
{
	int F,C;
	cout<<"Enter temperature in Fahrenheit:";
	cin>>F;
	C=(F-32)*5/9;
	if(C>35)
	cout<<"It is hot today";
	if(C<15)
	cout<<"It is cold today";
	else
	cout<<"It is a pleasant day";
	return 0;
}