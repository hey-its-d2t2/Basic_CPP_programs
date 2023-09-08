/*Wap in c++ to input charector in small letter and print the its 
previous letter */
#include<iostream>
#include<conio.h>
using namespace std;
int  main(){
	char ch;
	cout<<"Please enter a charecter : ";
	cin>>ch;
	char prev = (int)ch-1;
	cout<<"Previous Cherector of'"<<ch<<"' is : "<<prev<<endl;
	getch();
	return 0;
}
