//Print 1 to n using Recursion
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	void disp(int);
	system("cls");
	cout<<"N = ";cin>>n;
	disp(n);
	getch();
	return 0;
}
void disp(int n){
	if(n==0){
		return;
	}
	else
		disp(n-1);
	cout<<n<<" ";	
	
}
