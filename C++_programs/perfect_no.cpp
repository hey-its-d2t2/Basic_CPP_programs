/* Wap in cpp to check a number is perfect or not */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,result;
	cout<<"Enter a number :";
	cin>>n;
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
			result +=i;
	}
	if(result == n)
		cout<<"Perfect number"<<endl;
	else
		cout<<"Not a perfect number"<<endl;
	getch();
	return 0;
}
