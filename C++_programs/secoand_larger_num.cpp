/*Write down a program that will take three integers as 
input and will print second largest */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers : "<<endl;
	cout<<" n1 : ";cin>>n1;
	cout<<" n2 : ";cin>>n2;
	cout<<" n3 : ";cin>>n3;
	if(n1>n2 && n1>n3){
		if(n2>n3)
			cout<<"Secoand largest is : "<<n2<<endl;
		else
			cout<<"Secoand largest is : "<<n3<<endl;
	
	}
	else if(n2>n1 && n2>n3){
		if(n1>n3)
			cout<<"Secoand largest is : "<<n1<<endl;
		else
			cout<<"Secoand largest is : "<<n3<<endl;		
	}
	else 
	{
		if(n1>n2)
			cout<<"Secoand largest is : "<<n1<<endl;
		else
			cout<<"Secoand largest is : "<<n2<<endl;
	}
	getch();
	return 0;
}
