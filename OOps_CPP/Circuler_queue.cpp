//Circular Queue
#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int front = -1;
int rear = -1;
int q[MAX];
void enqueue(int ele){
	if((front == 0 && rear == MAX-1)||(front== rear+1)){
	cout<<"Overflow";
	cout<<"\n\nPress any key to continue"<<endl;
	getch();
	return;	
	}
	if(front == -1 && rear == -1){
		front = rear = 0;
		q[rear] =ele;
	}
	else if(rear == MAX-1)
	{
		rear = 0;
	}
	else{
		rear++;
		q[rear] = ele;
		cout<<"The Element : "<<ele<<" has inserted successfully."<<endl;
		cout<<"\n\nPress any key to continue"<<endl;
		getch();
	}
	return;
}
void dequeue(){
	int ele ;
	ele = q[front];//backup
	if(front == -1 && rear == -1){
		cout<<"Underflow";
		cout<<"\n\nPress any key to continue"<<endl;
		getch();
	}
	else if(front == rear){
		front = rear = -1;
	}
	else if(front == MAX-1){
		front = 0;
	}
	else{
		front++;
		cout<<"\nThe Element : "<<ele<<" has deleted successfully."<<endl;
		cout<<"\n\nPress any key to continue"<<endl;
		getch();
	}
	return;
}
void disp(){
	int i;
		if(front == -1 && rear == -1){
			cout<<"Underflow";
			cout<<"\n\nPress any key to continue"<<endl;
			getch();
			return;	
			}
		cout<<"The Element of Circular Queue is/are :"<<endl;
		if(rear>=front){
			for(i=front;i<=rear;i++){
				cout<<q[i]<<" ";
				}
			}
			else
			{
				for(i=front;i<=MAX-1;i++){
					cout<<q[i]<<" ";
					}
				for(i=0;i<=rear;i++){
					cout<<q[i]<<" ";
				}	
			}
		cout<<"\n\nress any key to continue."<<endl;
		getch();
}
int main(){
	int ch;
	int ele;
	while(1){
		system("cls");
		cout<<"********"<<"Select From Menu"<<"********"<<endl;
		cout<<"1. En-queue"<<endl;
		cout<<"2. De-queue"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter Element  : ";
				cin>>ele;
				enqueue(ele);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				disp();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice"<<endl;
				break;
		}
	}
	return 0;
}
