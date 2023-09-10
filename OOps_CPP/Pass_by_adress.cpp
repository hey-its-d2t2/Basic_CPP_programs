//Object as a Function Argument --> Pass By Address 
#include<iostream>
using namespace std;
class Ab{
	int a,b,c;
	public:
		void input(){
			cout<<"A : ";
			cin>>a;
			cout<<"B : ";
			cin>>b;
		}
		void result(Ab*);
};
void Ab::result(Ab *s){
	int m,su;
	c= s->a + s->b;
	m = s->a * s->b;
	su = s->a - s->b;
	cout<<"Addition = "<<c<<endl;
	cout<<"Subtraction = "<<su<<endl;
	cout<<"Multiplication = "<<m<<endl;
}
int main(){
	system("cls");
	Ab obj;
	obj.input();
	obj.result(&obj);
	return 0;
}

