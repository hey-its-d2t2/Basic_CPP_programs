/*Wap in c++ to computer the distance between 
two points in a plane */
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float x1,y1,x2,y2,side1,side2,distance;
	cout<<"Please enter points : "<<endl;
	cout<<"x1 : ";cin>>x1;
	cout<<"y1 : ";cin>>y1;
	cout<<"x2 : ";cin>>x2;
	cout<<"y2 : ";cin>>y2;
	side1 = x2-x1;
	side2 = y2-y1;
	distance =sqrt(side1*side1 + side2*side2);
	cout<<"\nDistance = "<<distance<<endl;
	getch();
	return 0;
}
