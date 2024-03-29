#include<iostream>
using namespace std;
int main()
{
    int i, j, k, a;
    cout<<"How many rows you want to enter=";
    cin>>a;
    cout<<endl;
    for(i=a;i>=1;i--)
    {
    for(k=1;k<(i*2);k++)
    {
        cout<<"*";
    }
    cout<<"\n";
    }
}