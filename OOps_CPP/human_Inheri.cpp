#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Human{
	//private:
	protected:
		string name;
		string gender;
		typedef struct dob{
			int dd;
			int mm;
			int yy;
		}db;
		int age;
	public:
		Human(){
			name = "Enter your name";
			gender = "Male/Female";
			//db = {01,01,2020};
			age = 18;
		}
		
};
class student:protected Human{
	private:
		int roll;
		float marks;
		string coll_sch_nm;
	public:
		student(){
			roll = 01;
			marks = 00.00;
			coll_sch_nm = "Xyz";
		}
		void input();
		void output();
		
};
void student::input(){
	cout<<"\t\tEnter Details of Student"<<endl;
	cout<<"\t\t------------------------"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	fflush(stdin);
	cout<<"Enter Gender(m/f) :";
	cin>>gender;
	fflush(stdin);
	cout<<"Enter DOB(DD MM YY) : ";
	cin>>db.dd>>db.mm>>db.yy;
	cout<<"Enter Age : ";
	cin>>age;
	fflush(stdin);
	cout<<"Enter College Name : ";
	cin>>coll_sch_nm;
	fflush(stdin);
	cout<<"Enter Roll : ";
	cin>>roll;
	fflush(stdin);
	cout<<"Enter Marks : ";
	cin>>marks;
	
}
void student::output(){
	cout<<"\t\tDetails of Student "<<endl;
	cout<<"\t\t___________________"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	//cout<<"DOB : "<<db.dd<<"/"<<db.mm<<"/"<<db.yy<<endl;
	cout<<"College name : "<<coll_sch_nm<<endl;
	cout<<"Roll : "<<roll<<endl;
	cout<<"Marks : "<<marks<<endl;
}
class employee :private Human{
	private:
		long int salary;
		string comp_name;
		string job_post;
	public :
		void input();
		void output();
};
void employee::input(){
	cout<<"\t\tEnter Details of Employee"<<endl;
	cout<<"\t\t------------------------"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Gender(m/f) :";
	cin>>gender;
	//cout<<"Enter DOB(DD MM YY) : ";
	//cin>>db->dd>>db->mm>>db->yy;
	cout<<"Enter Age : ";
	cin>>age;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Job Post : ";
	cin>>job_post;
	cout<<"Enter Company Name : ";
	cin>>comp_name;
}
void employee::output(){
	cout<<"\t\tDetails of Employee"<<endl;
	cout<<"\t\t___________________"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	//cout<<"DOB : "<<db.dd<<"/"<<db.mm<<"/"<<db.yy<<endl;
	cout<<"Company Name: "<<comp_name<<endl;
	cout<<"Job Post : "<<job_post<<endl;
	cout<<"Salary : "<<salary<<endl;
}
int main(){
	char ch;
	student s;
	employee e;
	cout<<"\t\tYou are a :"<<endl<<"-----------------------------------------"<<endl;
	cout<<"[1.] Student "<<"   [2.] Employee "<<"[3.] Exit "<<endl;
	cout<<"-----------------------------------------"<<endl;
	ch=getche();
	switch(ch){
		case'1':
			system("cls");
			s.input();
			s.output();
			break;
		case'2':
			system("cls");
			e.input();
			e.output();
			break;
		case'3':
			exit(0);
			break;
		default:
			cout<<"Invalid Choice."<<endl;
	}
	return 0;
}
