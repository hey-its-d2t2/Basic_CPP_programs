//Multiple 1
#include<iostream>
using namespace std;
class swap{
	private:
		int a,b;
	public:
		void input(){
			cout<<"Before Swaping"<<endl;
			cout<<"A = ";cin>>a;
			cout<<"b = ";cin>>b;
		}
		void output(){
			a =a+b;
			b = a-b;
			a = a-b;
			cout<<"After Swaping "<<endl;
			cout<<"A = "<<a<<"\nB = "<<b<<endl;
		}
};
class sum{
	private:
		int x,y,s;
	public:
		void get_data(){
			cout<<"For Sum "<<endl;
			cout<<"A = ";cin>>x;
			cout<<"B = ";cin>>y;
		}
		void put_data(){
			s =x+y;
			cout<<"Sum  = "<<s;
		}
};
class formula{
	private:
		int a,b,s,z;
	public:
		void input_value(){
			cout<<"\nfor Formula"<<endl;
			cout<<"a = ";cin>>a;
			cout<<"b = ";cin>>b;
		}
		void for_output(){
			s = a+b;
			z = s*s;
			cout<<" formula = "<<z;
		}
};
class all:public swap,public sum,public formula{
	public:
		display(){
			input();
			output();
			get_data();
			put_data();
			input_value();
			for_output();
			
		}
};
int main(){
	all a;
	a.display();
	return 0;
}
