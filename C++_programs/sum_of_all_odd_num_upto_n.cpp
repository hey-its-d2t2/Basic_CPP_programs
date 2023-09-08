/* Wap in cpp to print the summation of all odd numbers upto n */
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
		if(i%2==1)
			sum +=i;
	}
	cout<<"Sum = "<<sum<<endl;
	getch();
	return 0;
}
