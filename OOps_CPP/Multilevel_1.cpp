//Multilevel  1
#include<iostream>
using namespace std;
class first{
	protected:
		int a,b;
};
class secoand : public first{
	protected:
		int s;
};
class third :public secoand{
	public:
	void get_data(){
		cout<<"\n Enter A = ";
		cin>>a;
		cout<<"\n Enter B =";
		cin>>b;
	}	
	void put_data(){
		s = a+b;
		cout<<"\n Sum = "<<s;
	}
};
int main(){
	third th;
	th.get_data();
	th.put_data();
	return 0;
}
