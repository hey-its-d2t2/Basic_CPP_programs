//Ovrloading unary plus (+) Opreator Using Friend Function
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
		friend void operator ++(Overload &ob);
};
void operator ++(Overload &ob){
	ob.a = ob.a+1;
	ob.b+=1;
}
int main(){
	Overload ob;
	ob.disp();
	++ob;
	ob.disp();
	ob.input();
	ob.disp();
	++ob;
	ob.disp();
	return 0;
}
