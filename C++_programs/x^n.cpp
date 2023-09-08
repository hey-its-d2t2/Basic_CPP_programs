/* Wap in cpp to print x^n */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,n,res = 1;
	cout<<"Enter base ";
	cin>>x;
	cout<<"Enter power : ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		res *= x;
	}
	cout<<"x^n = "<<res<<endl;
	getch();
	return 0;
}
