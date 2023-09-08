/*Write down a program that will determine whether a given year 
as input is a leap year or not.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	if(year %400 == 0)
		cout<<"Leap Year"<<endl;
	else if(year %100 == 0)
		cout<<"Not a Leap Year"<<endl;
	else if(year%4 == 0)
		cout<<"leap Year"<<endl;
	else 
		cout<<"Not a Leap Year"<<endl;
	getch();
	return 0;
}
