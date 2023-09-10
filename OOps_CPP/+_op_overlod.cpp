//+ Opreator Ovrloading Using Friend Function
#include<iostream>
using namespace std;
class Overload{
	int a;
	int b;
	public:
		Overload(){
			a = 0;
			b = 0;
		}
		void input(){
			cout<<"A = ";cin>>a;cout<<" ,B = ";cin>>b;
		}
		void disp(){
			cout<<"\n A = "<<a<<" ,B = "<<b<<endl;
		}
		friend Overload operator +(Overload &ob,Overload &ob1);
};
Overload  operator +(Overload &ob,Overload &ob1){
	Overload temp;
	temp.a = ob.a+ob1.a;
	temp.b = ob.b+ob1.b;
	return temp;
}
int main(){
	Overload ob,ob1,ob3;
	ob.input();
	ob1.input();
	ob3 = ob+ob1;
	ob3.disp();
	return 0;
}
