/* Inputing Default Argument  in a Function */
#include<iostream>
#include<conio.h>
using namespace std;
int read();
int sum(int x=2,int y=read())
{
	return(x+y);
}
int read()
{
	int m;
	cout<<"\nEnter A No.: ";
	cin>>m;
	return m;
}
int main()
{
	int x,y;
	cout<<"Enter x and y : ";
	cin>>x>>y;
	cout<<"\n Sum = "<<sum(x,y);
	cout<<"\n Sum = "<<sum(y);
	cout<<"\n Sum = "<<sum(x);
	cout<<"\n Sum = "<<sum();
	getch();
	return 0;
}
