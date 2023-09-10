/* A base class B and a dericved class  D . the class B  contains one private
data member ,one public data memeber ,and three public member functions. the
class D contins one private data member and two public member functins. */ 

//  Single Inheritance : Public

#include<iostream>
using namespace std;
class B{
	private: 
	int a;		//Private;Not inheritable
	public:
		int b;	//Public;ready for inheritable
		void set_ab();
		int get_a();
		void show_a();
};
class D:public B	//Public derivation
{
	private:
		int c;
	public:
		void mul();
		void disp();
};
//-------------------------------------------
void B::set_ab()
{
	a=5;b=10;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"A = "<<a<<endl;
}
void D::mul()
{
	c = b*get_a();
}
void D::disp()
{
	cout<<"A = "<<get_a()<<endl;
	cout<<"B = "<<b<<endl;
	cout<<"C = "<<c<<endl;
}
//---------------------------------------
int main(){
	D d;
	d.set_ab();
	d.mul();
	d.show_a();
	d.disp();
	
	d.b = 20;
	d.mul();
	d.disp();
	return 0;
}
