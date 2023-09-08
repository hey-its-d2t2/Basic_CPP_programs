/* Calculate x^n using Recursion */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,n;
	long int power(int,int),result;
	cout<<"Enter Base : ";
	cin>>x;
	cout<<"Enter Power : ";
	cin>>n;
	result = power(x,n);
	cout<<"\n The "<<x<<"^"<<n<<" is : "<<result<<endl;
	getch();
	return 0;
}
long int power(int x,int n){
	if(n==0)
		return 1;
	else 
		return (x*power(x,n-1));
}
