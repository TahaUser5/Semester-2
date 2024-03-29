#include <iostream>
using namespace std;
int main()
{
	char Char;
	cout<<"Enter the first letter of your name=";
	cin>>Char;
	if(Char>='a'&&Char<='z')
	cout<<"The character is small";
	else if(Char>='A'&& Char<='Z')
	cout<<"The character is capital";
	else
	cout<<"Invalid";
}
