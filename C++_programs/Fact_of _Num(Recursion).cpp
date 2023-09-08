/* Factoriqal of a Number using  Recursion */
#include<iostream>
using namespace std;
int main(){
	int n;
	long int fact(int);
	cout<<" Enter N : ";
	cin>>n;
	cout<<" \n The factorial of "<<n<<" is :"<<fact(n)<<endl;	
}
long int fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
