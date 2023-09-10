/* Addition of two complex number using friend function -3 */
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private:
		float r,img;
	public:
		void input(){
			cout<<"Enter Real Part : ";cin>>r;
			cout<<"Enter Img Part : ";cin>>img;
		}
	friend void sum(complex ob1,complex ob2);
};
void sum(complex c1,complex c2){
	float rel,img;
	rel = c1.r+c2.r;
	img = c1.img+c2.img;
	cout<<":-> "<<rel<<showpos<<img<<noshowpos<<endl;
}
int main(){
	complex c1,c2;
	c1.input();
	c2.input();
	sum(c1,c2);
	getch();
	return 0;
}
