/* 				A menu-based   C++ Program  for 
 1. Number :- 
i)   	Sum of Natural  Number 
ii)	 Sum of Continuous Even Number 
iii) 	Sum of Continuous  Odd Number 
iv)	Check the Given Number is Even Or Odd.
v)	EXIT. 
2. Circle :- 
i)	 Area of Circle.
ii)	 Circumference of Circle.
iii)	Dimeter of Circle
iv)	Radios of Circle 
v)	EXIT
	
3. Rectangle:-
		i)	Area of Rectangle.
ii)	Perimeter of Rectangle.
iii)	Diagonal of Rectangle.
iv) 	 EXIT		

4. Cylender:-
i)	Volume of Cylinder.
ii)	Area of Curved Surface of Cylinder.
iii)	Area of Entire Surface of Cylinder 
iv)	 Both Area of Surface 
v)	EXIT.

5. EXIT 

*/

#include<iostream>
#include<math.h>
using namespace std;
class number{
	public:
		class natural{
		private :
		int n,a;
		public :
			void input(){
			cout<<"The Sum of first consecutive natural numbers :"<<endl;
			cout<<"Enter Last Number : ";cin>>n;
		}
		void output(){
			if(n==0){cout<< "\a0 is not natural Number.";
			}
			else{
				a=0;
				for(int i=1;i<=n;i++){
				a+=i;
				}
				cout<<"Ans : "<<a<<endl;
			}
		}
	};
	public:
		class sum_continious_even{
		private :
			int n;
		public :
			void input(){
				cout<<"Enter the number between which you want tofind the sum of even numbers."<<endl;
				cout<<"Enter Number : ";cin>>n;
			}
			void output(){
				int a=0;	
				for(int i=1;i<=n;i++){
				if(i%2==0){
				a+=i;
				}
			}
				cout<<"Ans : "<<a;
			}
	};
	public:
		class sum_continious_odd{
		private :
			int n;
		public :
			void input(){
				cout<<"Enter the number between which you want find the sum of odd numbers."<<endl;
				cout<<"Enter Number : ";cin>>n;
			}
			void output(){
				int a=0;
				for(int i=1;i<=n;i++){
					if((i%2)!=0){
					a+=i;
				}
			}
				cout<<"Ans : "<<a;
			}
	};
	public:
		class even_odd{
			private :
				int n,r;
			public:
			void input(){
				cout<<"Enter Number : ";cin>>n;
			}
			void output(){
				r=n%2;
				if(r==0){cout<<"Even Number. : "<<n;}
				else{cout<<"Odd Number. : "<<n;}
			}
		};
};
class Circle{
	public :
		class area{
			private :
				int r;
			public:
				void input(){
					cout<<"Enter Radious of Circle : ";
					cin>>r;
				}
				void output(){
					int a;
					cout<<"Area : "<<3.141*r*r;
				}
		};
		class circumference{
			private:
				int r;
			public :
				void input(){
					cout<<"Enter Radious of Circle : ";
					cin>>r;
				}
				void output(){
					cout<<"Circumfarence : "<<2*3.141*r;
				}
		};
	class dimeater{
		private :
			int r;
		public :
			void input(){
				cout<<"Enter Radious of Circle : ";
				cin>>r;
			}
			void output(){
				cout<<"Dimeater : "<<r*2;
			}
	};
	class radious{
		private :
			int d;
		public :
			void input(){
				cout<<"Enter The Dimeater of Circle : ";
				cin>>d;
			}
			void output(){
				cout<<"Radious : "<<d/2;
			}
	};
};
class Rectangle{
	public:
		class area_of_rectangle{
			private:
				int l,b;
			public:
				void input(){
					cout<<"Enter Length : ";cin>>l;
					cout<<"Enter Breadth : ";cin>>b;
				}
				void output(){
					cout<<"Area : "<<l*b;
				}
		};
		class perimeater{
			private :
				int l,b;
			public :
				void input(){
					cout<<"Enter Length : ";cin>>l;
					cout<<"Enter Breadth : ";cin>>b;
				}
				void output(){
					cout<<"Perimeater : "<<2*(l+b);
				}
		};
		class digonal{
			private :
				int l,b;
			public:
				void input(){
					cout<<"Enter Length : ";cin>>l;
					cout<<"Enter Breadth : ";cin>>b;
				}
				void output(){
					int a=l*l;
					int c=b*b;
					int d=a+c;
					cout<<"Digonal : "<<sqrt(d);
				}
		};

};
class cylinder{
	public:
		class Volume_of_cylender{
			private :
				int r,h;
			public :
				void input(){
					cout<<"Enter Radious : ";cin>>r;
					cout<<"Enter Hight : ";cin>>h;
				}
				void output(){
					cout<<"Volume : "<<3.141*r*r*h;
				}
		};
		class curved_surface{
			private :
				int r,h;
			public :
				void input(){
					cout<<"Enter Radious : ";cin>>r;
					cout<<"Enter Hight : ";cin>>h;
				}
				void output(){
					cout<<"Area  : "<<2*(3.141*r*h);
				}
		};
		class entire_surface{
			private :
				int r,h;
			public :
				void input(){
					cout<<"Enter Radious : ";cin>>r;
					cout<<"Enter Hight : ";cin>>h;
				}
				void output(){
					cout<<"Area  : "<<2*(3.141*r*h);
				}
		};
		class both{
			private :
				int r;
			public :
				void input(){
					cout<<"Enter Radious : ";cin>>r;
				}
				void output(){
					cout<<"Area  : "<<2*(3.141)*r*r;
				}
		};
	};

int main(){
	int n,a;
	cout<<"Choose Following :"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<" 1. Number\t2. Circle\t3. Rectangle\t4. Cyleinder\t5. EXIT "<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cin>>n;
	system("cls");
	switch(n){
		case 1:
			cout<<"1. Numbers."<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cout <<"1.Sum of Natural  Number \t2. Sum of Continous Even Number \t3.Sum of Continous  Odd Number \t4. Check The Given Number is Even Or Odd.\t5.EXIT. "<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cin>>a;
			system("cls");
			switch(a){
				case 1:
				cout<<"1. Sum of Natural Numbers."<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				number::natural n;
				n.input();
				n.output();
				break;
			case 2:
				cout<<"2. Sum of Continous Even Numbers. "<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				number::sum_continious_even en;
				en.input();
				en.output();
				break;
			case 3:
				cout<<"3.Sum of Continous Odd Numbers."<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				number::sum_continious_odd on;
				on.input();
				on.output();
				break;
			case 4:
				cout<<"4. Check The Given Number is Even Or Odd. "<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				number::even_odd eo;
				eo.input();
				eo.output();
				break;
			default :
				cout<<"EXIT.";
				
			}
		break;
		case 2:
			int cn;
			cout<<"2. Circle "<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cout<<"1. Area of Circle.\t2. Circumfarence of Circle.\t3. Dimeater of Circle\t4. Radious of Circle \t5. EXIT"<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cin>>cn;
			system("cls");
			switch(cn){
				case 1:
					cout<<"1. Areaof Circle."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					Circle::area ar;
					ar.input();
					ar.output();
				break;
				case 2:
					cout<<"2. Circumference of Circle"<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					Circle::circumference cr;
					cr.input();
					cr.output();
				break;
			case 3:
				cout <<"3. Dimeater  of Circle."<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				Circle::dimeater d;
				d.input();
				d.output();
			break;
			case 4:
				cout<<"4. Radious of Circle."<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				 Circle:: radious ra;
				ra.input();
				ra.output();
				break;
			default:
				cout<<"EXIT";
			}
			
		break;
		case 3:
			int rn;
			cout<<"3. Rectangle."<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cout<<"1. Area of Rectytangle.\t2. Perimeater of Rectanbgle.\t3. Digonal of Rectangle.\t4. EXIT"<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cin>>rn;
			system("cls");
			switch(rn){
				case 1:
					cout<<"1. Area of Rectangle."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					Rectangle::area_of_rectangle ar;
					ar.input();
					ar.output(); 
					break;
				case 2:
					cout<<"2. Perimeater of Rectangle."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					Rectangle::perimeater pm;
					pm.input();
					pm.output();
					break;
				case 3:
					cout<<"3. Digonal of Rectangle."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					Rectangle::digonal d;
					d.input();
					d.output();
					break;
				default:
					cout<<"Exit";
			}
		break;
		case 4:
			int cln;
			cout<<"4. Cylinder."<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cout<<"1. Volume of Cylinder.\t2. Area of Curved Surface of Cylinder.\t3. Area of Entire Surface of Cylinder \t4. Both Area of Surface \t5.EXIT."<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			cin>>cln;
			system("cls");
			switch(cln){
				case 1:
					cout<<"1.Volume of Cylinder."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					cylinder::Volume_of_cylender  v;
					v.input();
					v.output();
				break;
				case 2:
					cout<<"2. Area of Curved Surface of Cylinder."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					cylinder::curved_surface cs;
					cs.input();
					cs.output();
				break;
				case 3:
					cout<<"3. Area of Entire Surface of Cylinder."<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					cylinder::entire_surface es;
					es.input();
					es.output();
				break;
				case 4:
					cout<<"4. Both Area of Surface "<<endl;
					cout<<"---------------------------------------------------------------------------"<<endl;
					cylinder::both b;
					b.input();
					b.output();
				break;
				default:
					cout<<"EXIT";
			}
		break;
		default:
		cout<<"EXIT.";		
	}
	
}
