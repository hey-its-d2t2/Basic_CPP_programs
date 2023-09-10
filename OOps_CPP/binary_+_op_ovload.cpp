/* Overloading the /binary Plus(+) operator of same class */
#include<iostream>
using namespace std;
class ab{
	int a,b;
	public:
		ab(){
			a= 0;
			b=0;
		}
		ab(int x,int y){
			a=x;
			b=y;
		}
		ab operator+(ab p){
			ab t;
			t.a =a+p.a;
			t.b = b+p.b;
			return t;
		}
		void disp(){
			cout<<"A = "<<a<<" B = "<<b<<endl;
		}
};
int main(){
	ab x(5,7),y(9,3),z;
	cout<<"the Members of x :"<<endl;
	x.disp();
	cout<<"Members of y:"<<endl;
	y.disp();
	z=x+y;
	cout<<"The Memebers of z : "<<endl;
	z.disp();
	return 0;
}
