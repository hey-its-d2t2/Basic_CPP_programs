// Operater overloading using member function
#include<iostream>
using namespace std;
class Number{
	int a,b;
	public:
		void input(){
			cout<<"Enter A & B : ";
			cin>>a>>b;
		}
		void disp(){
			cout<<"\n A  = "<<a<<" B = "<<b;
		}
		/*
		Number fun(Number ob1){
			Number temp;
			temp.a = a+ob1.a;
			temp.b = b+ob1.b;
			return temp;
		}
		*/
		Number operator +(Number ob1){
			Number temp;
			temp.a = a+ob1.a;
			temp.b = b+ob1.b;
			return temp;
		}
	
};

int main(){
	Number ob1,ob2,ob3;
	ob1.input();
	ob2.input();
	ob3 = ob1+ob2;
	ob3.disp();
	/*
	ob1.input();
	ob2.input();
	ob3 = ob1.fun(ob2);
	ob3.disp();
	*/
	return 0;
}
