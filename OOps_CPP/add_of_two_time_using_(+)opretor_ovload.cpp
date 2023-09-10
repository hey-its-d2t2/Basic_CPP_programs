/*
 WAP in CPP to create A Time  Class  member hour minute secoand and create two object 
 with two diffrent time and find the sum of time by overaloading + operator
  -> 3:40:45+5:42:50 = 9:03:53
  Using Friend Function Operatoer Overloading
*/
#include<iostream>
using namespace std;
class Time{
	int hh;
	int mm;
	int ss;
	public:
		Time(){
			hh = 00;
			mm = 00;
			ss = 00;
		}
		void input_Time();
		void disp_Time();
		friend Time operator +(Time&,Time&);
		~Time(){}
};
void Time::input_Time(){
	cout<<"Enter Hour(HH) : ";
	cin>>hh;
	cout<<"Enter Minute(MM) : ";
	cin>>mm;
	cout<<"Enter Secoand(SS)  : ";
	cin>>ss;
}
void Time::disp_Time(){
	cout<<"\n\n";
	cout<<hh<<"::"<<mm<<"::"<<ss<<endl;
	cout<<"\n\n";
}
Time operator +(Time &T_1,Time &T_2){
	Time Sum_T;
	Sum_T.ss = (T_1.ss + T_2.ss) % 60;
	int m = (T_1.ss + T_2.ss)/60;
	Sum_T.mm = (T_1.mm + T_2.mm + m)%60;
	int h = (T_1.mm + T_2.mm)/60;
	Sum_T.hh = (T_1.hh + T_2.hh + h);
	return Sum_T;
}
int main(){
	Time T_1,T_2,T_3;
	T_1.input_Time();
	T_1.disp_Time();
	T_2.input_Time();
	T_2.disp_Time();
	//T_3 = T_1 + T_2;
	T_3 = operator +(T_1,T_2);
	T_3.disp_Time();
	
	return 0;
}
