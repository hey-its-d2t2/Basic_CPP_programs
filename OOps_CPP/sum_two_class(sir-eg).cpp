#include<iostream>
using namespace std;
class first{
	protected:
		int a,b;
};
class secoand:public first{
	private :
		int s;
	public:
		void input(){
			cout<<"A = ";cin>>a;
			cout<<"b = ";cin>>b;
		}
		void sum(){
			s = a+b;
			cout<<"Sum = "<<s;
		}
};
int main(){
	secoand obj;
	obj.input();
	obj.sum();
	return 0;
}
