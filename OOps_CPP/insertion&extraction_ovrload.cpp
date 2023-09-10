//Overloaad the inserction and extraction operator
//<< inserction,>>extraction operator
#include<iostream>
using namespace std;
 class number {
 	int  a;
 	float b;
 	public:
 		number(){
 			a = 0;
 			b = 0.0;
		 }
	friend istream& operator >>(istream &in,number &n1);	
	friend ostream& operator <<(ostream &out,number &n1);	
 };
 istream& operator >>(istream &in,number &n1){
 	in>>n1.a;
 	in>>n1.b;
 	return(in);
 }
 ostream& operator <<(ostream &out,number &n1){
 	out<<n1.a<<" "<<n1.b;
 	return(out);
 }
int main(){
	number n1,n2;
	cout<<"Enter Values For Object : ";
	cin>>n1;
	cout<<n1;
	cin>>n2;
	cout<<n2;
	return 0;
}
