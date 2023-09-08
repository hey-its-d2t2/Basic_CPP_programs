/* Wap in Cpp to print the even number upto n */
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
		if(i%2==0)
			cout<<" "<<i;
	}

	getch();
	return 0;
}
