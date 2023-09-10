/* Write a Progrma in CPP to overload unary ++ operater uising member function and binay + operater
with friend function */
#include<iostream>
using namespace std;
class Ovearload{
	int a;
	int b;
	public:
		Ovearload(){
			a=0;
			b=0;
		}
		~Ovearload(){}
		void operator ++(){
			a++;b++;
		}
		void operator ++(int){
			a++;b++;
		}
		void disp();
		friend void operator +(Ovearload&);
};
void operator +(Ovearload &ov1){
	ov1.a = ov1.a+1;
	ov1.b = ov1.b+1;
}
void Ovearload::disp(){
	cout<<"A = "<<a<<" ,B = "<<b<<endl;
} 
int main(){
	Ovearload ov1;
	ov1.disp();
	ov1++;
	ov1.disp();
	++ov1;
	ov1.disp();
	++ov1;
	ov1.disp();
	ov1++;
	ov1.disp();
	+ov1;
	ov1.disp();
	+ov1;
	ov1.disp();
	return 0;
}
