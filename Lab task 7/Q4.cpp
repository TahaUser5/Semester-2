#include<iostream>
using namespace std;
int main()
{
	int val1,val2;
	char ch='a',op;
	cout<<"Enter first value=";
	cin>>val1;
	cout<<"Enter second value=";
	cin>>val2;
	cout<<"Enter any arithematic operator=";
	cin>>op;
	
	while(ch!='$')
	{
		switch(op)
		{
		case '+':
		cout<<"\nThe sum will be="<<val1+val2;
		break;
		case '-':
		cout<<"\nThe subtract will be="<<val1-val2;
		break;
		case '*':
		cout<<"\nThe product will be="<<val1*val2;
		break;
		case '/':
		cout<<"\nThe division will be="<<val1/val2;
		break;
		default:
		cout<<"invalid input";
	}
	cout<<"\nDo you wish to calculate again? Press $ to stop";
	cin>>ch;
	}
	cout<<"\nCalculator is stopped Thank you!!";

}