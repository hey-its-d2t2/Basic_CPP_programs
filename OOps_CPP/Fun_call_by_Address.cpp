//Function Call by Address
#include<iostream>
using namespace std;
//Function Defenation
void swap(int *x,int *y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
	cout<<"In Function:-"<<endl;
	cout<<"A = "<<*x<<", B = "<<*y<<endl;
}
int main(){
	int a =10,b=20;
	//Function Decleration
	void swap(int*,int*);
	cout<<"Befor Function Call:-"<<endl;
	cout<<"A = "<<a<<", B = "<<b<<endl;
	//Function Call(swap)
	swap(&a,&b);
	cout<<"After Function Call:-"<<endl;
	cout<<"A = "<<a<<", B = "<<b<<endl;
	return 0;
	
}
