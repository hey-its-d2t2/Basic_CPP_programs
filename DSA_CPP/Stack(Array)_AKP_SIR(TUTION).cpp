/*Array implementation of Stack */
#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int stack[MAX],top = -1;
int main(){
	void push(int);
	int pop();
	void disp();
	int peak();
	int ele;
	char ch;
	system("cls");
	while(1){
		system("cls");
		cout<<"** Choice Menu **"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Peak"<<endl;
		cout<<"4. Disp"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"*****************"<<endl;
		cout<<"*Enter  Your Choice(1-5) : ";
		ch = getche();
		switch(ch){
			case'1':
				cout<<"\nEnter the element which you want to push : ";
				cin>>ele;
				push(ele);
				break;
			case'2':
				ele = pop();
				if(ele != -1)
					cout<<"The element  "<<ele<<"  has been popped from the stack"<<endl;
					cout<<"press any key to continue.";
					getche();
				break;
			case'3':
				ele = peak();
				if(ele != -1)
					cout<<"The top  most element of stack is : "<<ele;
				break;
			case'4':
				disp();
				break;
			case'5':
				exit(0);
				break;
			default:
				cout<<"\a\n INVILID CHOICE"<<endl;
		}
	}
	getch();
	return 0;
}
void push(int ele){
	if(top ==MAX-1){
		cout<<"\nStack Overflow";
		return;
	}
	stack[++top] = ele;
	cout<<"\n The element "<<ele<<" has been pushed successfully into the stack"<<endl;
	cout<<"press any key to continue.";
	getche();
}
int pop(){
	if(top == -1){
		cout<<"\nStack Underflow";
		//cout<<"\n Stack is Empty";
		return -1;
	}
	return(stack[top--]);	
}
int peak(){
	if(top == -1){
		cout<<"\n Stack underflow"<<endl;
		return -1;
	}
	cout<<"\n:: "<<stack[top];
	cout<<"press any key to continue.";
	getche();
}
void disp(){
	int i;
	if(top == -1){
		cout<<"Stack underflow ";
		return;
	}
	for(i=top;i>=0;i--){
		cout<<"\n "<<stack[i]<<endl;
	}
	cout<<"press any key to continue.";
	getche();
	return;
}
