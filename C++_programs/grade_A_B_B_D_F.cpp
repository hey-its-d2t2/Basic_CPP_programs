/*  Write down a program that will take a student mark as input and 
will convert into corresponding letter grade.
A   -  90-100
B   - 80-89
C   - 70-79
D   - 60-69
F   - 0-59
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	cout<<"Enter numnber : ";
	cin>>num;
	switch(num/10){
		case 9:
		case 10:
			cout<<"A"<<endl;
			break;
		case 8:
			cout<<"B"<<endl;
			break;
		case 7:
			cout<<"C"<<endl;
			break;
		case 6:
			cout<<"D"<<endl;
			break;
		default:
			cout<<"F"<<endl;	
	}
	getch();
	return 0;
}
