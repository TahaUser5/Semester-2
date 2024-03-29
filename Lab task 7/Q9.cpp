#include<iostream>
using namespace std;
int main()
{
    int i,j,row_num,space;
    cout<<"Enter the Number of Rows= ";
    cin>>row_num;
    space=row_num-1;
    for(i=1;i<=row_num;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        space--;
        for(j=1;j<=(2*i-1);j++)
            cout<<"*";
        cout<<endl;
    }
    space=1;
    for(i=1;i<=(row_num-1);i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";
        space++;
        for(j=1;j<=(2*(row_num-i)-1);j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
