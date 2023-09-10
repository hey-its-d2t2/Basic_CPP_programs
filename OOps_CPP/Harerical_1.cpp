//Harerical Inheritance
#include<iostream>
using namespace std;
class xyz{
	protected:
		int a,b;
};
class sum:public xyz{
	public:
		sum(){
			a=0;
			b=0;
		}
		void input(){
			cout<<"\n for Sum"<<endl;
			cout<<"A = ";
			cin>>a;
			cout<<"B = ";
			cin>>b;
		}
		void output(){
			cout<<"Sum = "<<a+b<<endl;
		}
};
class swap:public xyz{
	public:
		void input_swap(){
			cout<<"\n for swaping"<<endl;
			cout<<"A = ";
			cin>>a;
			cout<<"B = ";
			cin>>b;
		}
		void swap_output(){
				int c;
			c = a;
			a = b;
			b = c;
			cout<<"\nAfter Swaping \n A = "<<a<<"\n B = "<<b<<endl;
		}
};
class Mult:public xyz{
	public:
		void mult_input(){
			cout<<"\nFor Multiplication"<<endl;
			cout<<"A = ";cin>>a;
			cout<<"B = ";cin>>b;
		}
		void mult_output(){
			cout<<"\nMultiplication = "<<a*b<<endl;
		}
};
int main(){
	sum s;
	//swap sw;
	//mult m;
	int ch;
	cout<<"\n1.Sum"<<endl;
	cout<<"2.Swap"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"\n\n Enter your choice :";
	cin>>ch;
	switch(ch){
		case 1:
			s.input();
			s.output();
			break;
		case 2:
			//sw.input_swap();
			//sw.swap_output();
			break;
		case 3:
			//m.mult_input();
			//m.mult_output();
			break;
		default:
			cout<<"invalid choice";
			break;
	}
	return 0;	
}

