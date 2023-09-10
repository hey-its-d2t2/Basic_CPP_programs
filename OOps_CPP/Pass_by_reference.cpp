//Object as a Function Argument --> Pass By Reference 
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
		void result(Ab&);
};
void Ab::result(Ab &s){
	c= s.a + s.b;
	cout<<"Addition = "<<c<<endl;
}
int main(){
	system("cls");
	Ab obj;
	obj.input();
	obj.result(obj);
	return 0;
}

