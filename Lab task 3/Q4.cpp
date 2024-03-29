#include<iostream>
using namespace std;
int main()
{
	float calor=4.6,min=5,caloriespermin,calories;
	caloriespermin=calor/min;
	calories=caloriespermin*28;
	cout<<"If man runs on a treadmill for 28 min he will burn="<<calories<<" calories";
}