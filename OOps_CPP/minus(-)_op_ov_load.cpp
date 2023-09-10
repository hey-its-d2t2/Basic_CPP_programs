/* Oveerloading Unary Minus(-) Operator*/
#include<iostream>
using namespace std;
class ab{
	int a,b;
	public:
	ab(){
		a=0;b=0;
	}
	ab(int x,int y){
		a=x;b=y;
	}
	void disp(){
		cout<<"A = "<<a<<" B = "<<b<<endl;
	}
	void operator-(){
		a = -a;
		b = -b;
	}
};

int main(){
	ab x(10,-5);
	x.disp();
	-x;
	x.disp();	
	return 0;
}
