#include<iostream>
using namespace std;
int main()
{
	int a,b=2,counter=0;
	cout<<"Enter the number to check whether it's prime or not=";
	cin>>a;
	while(a>b)
	{
		if(a%b==0)
		{
			cout<<"Not prime!\n";
			counter++;
			break;
		}
		b++;
	}
		if(counter==0)
		{
			cout<<"Prime!\n";
		}

}