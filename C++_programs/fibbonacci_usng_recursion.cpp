//Fibbonacci serise using recusion and normal 
#include<iostream>
#include<conio.h>
using namespace std;
//Using Recursion upto given term -->fibo(n) = fibo(n-1)+fibo(n-2) | tail Point-->n=0,o-->n=1,1
int main(){
	int n,i=0,c=0;
	int fibo(int);
	system("cls");
	cout<<"N =";cin>>n;
	cout<<"Fibonacci Serise :"<<endl;
	for(i=1;i<=n;i++){
		cout<<fibo(c++)<<"  ";
	}
	getch();
	return 0;
}
int fibo(int n){
		if(n==0)
			return 0;
		else if (n==1)
			return 1;
		else
			return (fibo(n-1)+fibo(n-2));
}
/*
//----------------------------------
// Normal upto n
int main(){
	int a=0,b=1,c=0,n;
	cout<<" N= ";cin>>n;
	cout<<"Fibonacci Serice upto N "<<n<<"are as follows : "<<endl;
	while(c<=n){
		cout<<c<<" ";
		a = b;
		b = c;
		c = a+b;
	}	
} 

*/

