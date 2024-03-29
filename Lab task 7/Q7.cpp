#include<iostream>
using namespace std;
int main() 
{
	int a = 6;
	for (int i = 0; i< 6;i++) 
	{                   
	for (int s=0;s<i+1;s++) 
	{
    cout<<char(i + 65);
   	}
    a--;
   	cout<<endl;
    }
}
