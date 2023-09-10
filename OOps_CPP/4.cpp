//A C++ Program to Add Two numbers using Friend Function 
#include<iostream>
#include<conio.h>
using namespace std;
class AB{
	int a,b;
	public:
		void set_values(int x,int y){
			a=x;
			b=y;
		}
		void disp(){
			cout<<"\n A = "<<a<<"\n B = "<<b<<endl;
		}
		friend int sum(AB);
};
int sum(AB a){
	return(a.a+a.b);
}
int main(){
	AB x;
	//clrscr();
	x.set_values(10,20);
	x.disp();
	cout<<"Sum = "<<sum(x);
	getch();
	return 0;
}
