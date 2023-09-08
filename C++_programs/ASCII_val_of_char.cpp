/* Wap in c++ to print the ASCII value of the given charector */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Please enter a charector : ";
	cin>>ch;
	int ascii = (int)ch;
	cout<<"ASCII Value of '"<<ch<<"' is : "<<ascii<<endl;
	getch();
	return 0;
}
