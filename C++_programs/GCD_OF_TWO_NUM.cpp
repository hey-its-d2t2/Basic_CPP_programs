/* GCD of Two Numbers using Recursion */ 
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	int GCD(int,int),result;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	result = GCD(a,b);
	cout<<"\n GCD of  "<<a<<" and  "<<b<<" is :"<<result<<endl;
	getch();
	return 0;
}
int GCD(int a, int b){
	if(b==0)
		return a;
	else
		return (GCD(b,a%b));
}
