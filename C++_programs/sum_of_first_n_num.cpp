/* Wap in cpp to print sum of first n nummbers */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,sum =0;
	cout<<"Please enter a number:";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		sum += i;
	}
	cout<<"Sum = "<<sum<<endl;
	getch();
	return 0;
}
