/* Stack Using linked List */
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
typedef struct Link_stack{
	int ele;
	struct Link_stack *next;
}stack;
stack *top = NULL;
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
	stack *ptr;
	ptr = (stack*)malloc(sizeof(stack));
	ptr->ele = ele;
	if(top == NULL){
		ptr->next = NULL;
		return;
	}
	ptr->next = top;
	top = ptr;
	cout<<"press any key to continue.";
	getche();
	return;
}
int pop(){
	stack *ptr;
	if(top == NULL){
		cout<<"\n Stack Underflow."<<endl;
		return -1;
	}
	ptr = top;
	top = ptr->next;
	
	cout<<"press any key to continue.";
	getche();
	return -1;
}
int peak(){
	cout<<"press any key to continue.";
	getche();
}
void disp(){
	stack *ptr;
	if(top == NULL){
		cout<<"\n Stack Undrflow.";
		return;
	}
	ptr = top;
	while(ptr != NULL){
		cout<<" \n "<<ptr->ele<<endl;
		ptr->next;
	}
	cout<<"press any key to continue.";
	getche();
	return;
	
}

