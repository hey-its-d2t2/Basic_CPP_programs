/* Convert Heignt :Inch to Feet */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float  height,feet;
	//clrscr();
	cout<<"Enter hight inch  : ";
	cin>>height;
	feet = height/12; 
	cout<<"Feet = "<<feet<<endl;
	getch();
	return 0;
}
