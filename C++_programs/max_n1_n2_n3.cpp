/*Write down a program in c++ that will take three integers as 
input and will print maximum of three */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers : "<<endl;
	cout<<" n1 : ";cin>>n1;
	cout<<" n2 : ";cin>>n2;
	cout<<" n3 : ";cin>>n3;
	if(n1>n2 &&n1>n3)
		cout<<"\n n1 is Maximam : "<<n1<<endl;
	else if(n2>n1 && n2>n3)
		cout<<"\n n2 is Maximam : "<<n2<<endl;
	else
		cout<<"\n n3 is Maximam : "<<n3<<endl;
	getch();
	return 0;
}
