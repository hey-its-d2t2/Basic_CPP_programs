/* Sum of  N Natural Numbers using Recursion */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,sum(int);
	cout<<"Enter N: ";
	cin>>n;
	cout<<"\n The Sum of Namtural Number upto "<<n<<" is :"<<sum(n)<<endl;
	getch();
	return 0;
}
int sum(int n){
	if(n==1)
		return 1;
	else 
		return (n+sum(n-1));
}
