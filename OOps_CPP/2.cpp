/* A C++ Program to decleare friend class and accesss the private data -2*/
#include<iostream>
using namespace std;
class B;
class A{
	private:
		int a;
	public:
		void a_set(){
		a=30;
		}
		void show(B);
};
class B{
	private:
		int b;
	public:
			void b_set(){
				b=40;
			}
	friend void A::show(B b);
};
void A::show(B b){
	cout<<"\n A = "<<a;
	cout<<"\n B = "<<b.b;
}
int main(){
	//clrscr();
	A a1;
	a1.a_set();
	B b1;
	b1.b_set();
	a1.show(b1);
	return 0;	
}
