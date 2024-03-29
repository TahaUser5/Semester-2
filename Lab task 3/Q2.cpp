#include<iostream>
using namespace std;
int main()
{
	int height,width,length,volume;
	cout<<"Enter the height of a cube=";
	cin>>height;
	cout<<"Enter the width of a cube=";
	cin>>width;
	cout<<"Enter the length of a cube=";
	cin>>length;
	volume=height*width*length;
	cout<<"The volume of cube is="<<volume;
}