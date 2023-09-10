/*Overloadng binary * Operator */
#include<iostream>
using namespace std;
class ab{
	int a,b;
	public:
		ab(){
			a=0;b=0;
		}
		ab(int x,int y){a=x;b=y;
		}
		void disp(){
			cout<<"A = "<<a<<" B =  "<<b<<endl;
		}
		ab operator*(ab p){
			ab t;
			t.a =a*p.a;
			t.b = b*p.b;
			return t;
		}
};
int main(){
	ab x(10,20),y(30,40),z;
	cout<<"The Members of x : "<<endl;
	x.disp();
	cout<<"Members of y : "<<endl;
	y.disp();
	z = x*y;
	cout<<"The Members of z :"<<endl;
	z.disp();
	return 0;
}
