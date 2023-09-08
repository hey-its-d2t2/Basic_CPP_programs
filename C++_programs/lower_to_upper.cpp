/* Wap in c++ to print the lowercase letter into uppercase letter */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char ch;
	cout<<"Please enter a lowercase letter : ";
	cin>>ch;
	char lower = (int)ch-32;
	cout<<"In uppercase '"<<ch<<"' is : "<<lower<<endl;
	getch();
	return 0;
}
