/*Print first natural numbers 
1.) upwards
*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter a number:";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<" "<<i;
	}

	getch();
	return 0;
}
*/
/*
2.) downwards
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter a number:";
	cin>>n;
	for(int i=n; i>=1; i--)
	{
		cout<<" "<<i;
	}

	getch();
	return 0;
}
