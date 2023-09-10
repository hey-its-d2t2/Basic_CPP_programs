//Overloading Binary plus(+) operator using Friend function 
#include<iostream>
using namespace std;
class B;
class A{

	int a;
	public:
		void setA(){
			a=20;
		}
		void disp(){
			cout<<"A = "<<a;
		}
		friend void fun(A ob1,B ob2);
};
class B{

	int b;
	public:
		void setB(){
			b=30;
		}
		void disp(){
			cout<<"\nB = "<<b;
		}
		friend void fun(A ob1,B ob2);
};

void fun(A ob1,B ob2)
{
	
	int c =ob1.a+ob2.b;
	cout<<"\n Result : "<<c;
}
int main(){
	A ob1;
	B ob2;
	//void fun(A,B);
	ob1.setA();
	ob2.setB();
	fun(ob1,ob2);
	return 0;
}

