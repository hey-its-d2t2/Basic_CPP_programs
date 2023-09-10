//Single Inheritance
#include<iostream>
using namespace std;
class DCA{
	public:void display1(){
		cout<<"1. M.S office"<<endl;
		cout<<"2. M.S windows"<<endl;
		cout<<"3. Linux"<<endl;
		cout<<"4. M.S. Dos"<<endl;
	}
};
class ADCA:public DCA{
	public:
		void display(){
			display1();
			cout<<"5. D T P"<<endl;
			cout<<"6. C F A"<<endl;
		}
};
int main(){
	DCA D;
	ADCA AD;
	int ch;
	cout<<"\n 1. DCA"<<endl;
	cout<<" 2. ADCA"<<endl;
	cout<<" 3. Exit"<<endl;
	cout<<"Enter yuour choice:"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			D.display1();
			break;
		case 2:
			AD.display();
		case 3:
			exit(0);
			break;
		default:
			cout<<"Invalid choice"<<endl;
	}
	return 0;
}
