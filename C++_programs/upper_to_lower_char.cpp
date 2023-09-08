/* Wap in c++ to print the Uppercase letter into lowercase letter */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char ch;
	cout<<"Please enter a uppercase letter : ";
	cin>>ch;
	char lower = (int)ch+32;
	cout<<"In lowertcase '"<<ch<<"' is : "<<lower<<endl;
	getch();
	return 0;
}
