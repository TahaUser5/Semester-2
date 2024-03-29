#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter any Special character=";
	cin>>a;
	while(a<33 || a>47 && a<58 || a>64 && a<91 || a>96 && a<123 || a>126)
	{
		cout<<"invalid input\n";
		cout<<"Please enter again!!\n";
		cin>>a;
	}
		cout<<"Its a Special Character";
}