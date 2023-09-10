//Function Call By Reference
#include<iostream>
using namespace std;
//Functin Defenation/Function Body
void swap(int &x,int &y){
	int t;
	t = x;
	x = y;
	y = t;
	cout<<"In Functin:-"<<endl;
	cout<<"A = "<<x<<", B = "<<y<<endl;
}
int main(){
	int a = 10,b=20;
	//Function Decleration
	void swap(int&,int&);
	cout<<"Before Function Call:-"<<endl;
	cout<<"A = "<<a<<", B = "<<b<<endl;
	//Function call(swap)
	swap(a,b);
	cout<<"After Function Call:-"<<endl;
	cout<<"A = "<<a<<", B = "<<b<<endl;
	
	return 0;
}
