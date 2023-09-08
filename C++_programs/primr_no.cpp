/* Wap in cpp to check a number is prime or not */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, check=1;
	cout<<"Enter a number :";
	cin>>n;
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			check=0;
			break;
		}
	}
	if(check==1 && n != 1)
		cout<<"Prime number"<<endl;
	else
		cout<<"Not a prime number"<<endl;
	getch();
	return 0;
}
