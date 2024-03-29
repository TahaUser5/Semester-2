#include<iostream>
using namespace std;
int main()
{
	string name ,en_name,password , en_password;
	name="Taha";
	password="1234";
	cout<<"Enter your name=";
	cin>>en_name;
	cout<<"Enter your password=";
	cin>>en_password;
	if(en_name==name)
	{
		if(en_password==password)
		{
		cout<<"Access Granted";
	}
		else 
		{
		cout<<"Incorrect pssword;";
	}
		}
		else
		{
		cout<<"your name is wrong";
		if(en_password!=password)
		{
		cout<<"wrong password";
			}
		}
}

