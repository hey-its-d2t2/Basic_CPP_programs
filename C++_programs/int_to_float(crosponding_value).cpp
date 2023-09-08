/* Write a program to convert an integer into the corresponding floating point number. */
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	//Variable Decleration
	int int_num;
	float float_num;
	//clrscr();
	cout<<"Enter The Interger valuue : ";
	cin>>int_num;
	float_num = (float)int_num;
	cout<<"The Corresponding floating value is : "<<float_num<<endl;
	return 0;
}
