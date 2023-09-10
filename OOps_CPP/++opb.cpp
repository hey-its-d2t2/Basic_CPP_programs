//++ Operator overloading using Member funcrtion
#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			a=6;
		}
		void operator ++(){
			++a;
		}
		void disp(){
			cout<<"\n A = "<<a;
		}
		void operator ++(int){
			a++;
		}
};
int main(){
	A ob1;
	ob1.disp();
	++ob1;//ob1.operator++();
	ob1.disp();
	ob1++;//ob1.operator++(1);
	ob1.disp();
	return 0;
}
