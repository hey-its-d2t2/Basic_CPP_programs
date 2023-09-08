/* WAP in c++ to add, subtract, multiply,
and division of two numbers */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	//clrscr();
	cout<<"Please enter two numbers:-"<<endl;
	cout<<"A = ";cin>>a;
	cout<<"B = ";cin>>b;
	cout<<"Addition : "<<a+b<<endl;
	cout<<"Subtraction : "<<a-b<<endl;
	cout<<"Multiplication : "<<a*b<<endl;
	cout<<"Division  : "<<a/b<<endl;
	getch();
	return 0;
}
