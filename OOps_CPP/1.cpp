/* A C++ Program to Access private data using non-member function,use friend funtion    -1*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class AC{
	private:
		string name;
		int ac_no;
		float bal;
	public:
		void read(){
			cout<<"\n Name : ";
			getline(cin,name);
			cout<<"\nA/C No. : ";
			cin>>ac_no;
			cout<<"Balance : ";
			cin>>bal;
		}
		friend void show_bal(AC);
};
void show_bal(AC a){
	cout<<"\n Balance of A/C No. : "<<a.ac_no<<" is Rs.: "<<a.bal<<endl;
}
int main(){
	system("cls");
	AC a;
	a.read();
	show_bal(a);
	getch();	
	return 0;
}
