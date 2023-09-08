/*Wap in c++ that will take two integers as 
input and will print maximum of two */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2;
	//clrscr();
	cout<<"Enter two numbers : "<<endl;
	cout<<" n1 : ";cin>>n1;
	cout<<" n2 : ";cin>>n2;
	if(n1>n2)
		cout<<"\n n1 is Maximam : "<<n1<<endl;
	else 
		cout<<"\n n2 is Maximum : "<<n2<<endl;
	getch();
	return 0;
}

