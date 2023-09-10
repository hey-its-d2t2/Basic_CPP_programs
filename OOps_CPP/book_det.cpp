//Multilevel Inhertiance
#include<iostream>
using namespace std;
class publisher{
	protected:
		string pname;
		string paddress;
		long regno;
};
class book : public publisher {
	protected:
		long bno;
		string bname;
		float price;
};
class bookstore : public book{
	protected:
		long bno;
		string sname;
		string sadd;
	public:
		void get_data(){
			cout<<"Enter Publisher Name: ";getline(cin,pname);
			cout<<"\n Ente Publisher Address";getline(cin,paddress);
			fflush(stdin);
			cout<<"\n Enter Reg No.:";cin>>regno;
			fflush(stdin);
			cout<<"\n Enter Book No.:";cin>>bno;
			fflush(stdin);
			cout<<"\n Enter subject name";getline(cin,sname);
			fflush(stdin);
			cout<<"\n Enter Price :";cin>>price;
			fflush(stdin);
			cout<<"\n Enter Book No: ";cin>>bno;
			fflush(stdin);
			cout<<"\n Enter Stor Name:";getline(cin,sname);
			cout<<"\n Enter Store Address:";getline(cin,sadd);
		}
		void put_data(){
				cout<<"\n Publisher name: "<<pname;
				cout<<"\n Publisher Address"<<paddress;
				cout<<"\nReg No.:"<<regno;
				cout<<"\nBook No.:"<<bno;
				cout<<"\n subject name"<<sname;
				cout<<"\nPrice :"<<price;
				cout<<"\nBook No: "<<bno;
				cout<<"\nStor Name:"<<sname;
				cout<<"\nStore Address:"<<sadd;
		}
};
int main(){
	bookstore b;
	b.get_data();
	b.put_data();
	return 0;
}
