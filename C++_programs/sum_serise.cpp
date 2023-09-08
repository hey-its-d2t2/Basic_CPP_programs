/* Wap in cpp to find the summation of the serise:
1+2+3+4.....+uptop n
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,sum =0,i;
	cout<<"Please enter a number:";
	cin>>n;
	for(i=1; i<=n; i++)
	{
			sum +=i;
	}
	for(i= 1;i<n;i++){
		cout<<i<<"+";
	}
	cout<<i<<" = "<<sum<<endl;
	getch();
	return 0;
}
