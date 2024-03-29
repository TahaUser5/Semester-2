#include<iostream>
using namespace std;
int main()
{
	int sec,guess;
	cout<<"Enter the secret number\n";
	cin>>sec;
	cout<<"\n";
	cout<<"Now Enter the Guessed number\n";
	cin>>guess; 
	while(sec!=guess)
{
	cout<<"Not correct\n"<<"try again!!\n";
	cin>>guess;
}
	cout<<"Congratulations!!";
}