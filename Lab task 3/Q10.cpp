#include<iostream>
using namespace std;
int main()
{
	int pkr,r5000,r1000,r500,r100,r50,r20,r10,r5,r1;
	cout<<"Enter the value=";
	cin>>pkr;
	r5000=pkr/5000;
	pkr=pkr%5000;
	r1000=pkr/1000;
	pkr=pkr%1000;
	r500=pkr/500;
	pkr=pkr%500;
	r100=pkr/100;
	pkr=pkr%100;
	r50=pkr/50;
	pkr=pkr%50;
	r20=pkr/20;
	pkr=pkr%20;
	r10=pkr/10;
	pkr=pkr%10;
	r5=pkr/5;
	pkr=pkr%5;
	r1=pkr/1;
	pkr=pkr%1;
	cout<<"Notes of 5000="<<r5000<<"\nNotes of 1000="<<r1000<<"\nNotes of 500="<<r500<<"\nNotes of 100="<<r100<<"\nNotes of 50="<<r50<<"\nNotes of 20="<<r20<<"\nNotes of 10="<<r10<<"\nNotes of 5="<<r5<<"\nNotes of 1="<<r1;
	return 0;
}