#include<iostream>
using namespace std;
int main()
{
	int caloriesburned,i=10,cal=3.6;
	while(i<=30)
	{
		caloriesburned=i*cal;
		cout<<"In "<<i<<" minutes person would burn "<<caloriesburned<<" calories."<<endl;
		i=i+5;
	}
}