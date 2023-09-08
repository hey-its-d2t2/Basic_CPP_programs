/*Wap in CPP to print odd numbers upto n */
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
		if(i%2==1)
			cout<<" "<<i;
	}

	getch();
	return 0;
}
