//Simple/Linear/Ordinary Queue
#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int front = -1;
int rear = -1;
int q[MAX];
void enqueue(int ele){
	if(rear == MAX-1){
		cout<<"Overflow"<<endl;
		return;
	}
	if(rear == -1 && front ==-1){
		front = rear = 0;
		q[rear] = ele;
	}
	else{
		rear += 1;
		q[rear] = ele;
		cout<<"One Element : "<<ele<<" has insertred successfully."<<endl;
		cout<<"\n\nPress any key to continue."<<endl;
		getch();
	}
	return;
}
void dequeue(){
	int ele;
	ele =q[front];
	if(rear == -1 && front == -1){
		cout<<"Underflow"<<endl;
		return;
	}
	if(front == rear){
		front  = rear = -1;
	}
	else{
		front++;
		cout<<"The Element : "<<ele<<" has deleated Successfully."<<endl;
		cout<<"\n\nPress any key to continue."<<endl;
		getch();
	}
}
void disp(){
	if(front == -1 && rear == -1){
		cout<<"Underflow"<<endl;
		return;
	}
	cout<<"The Elements of Simple Queue is/are : "<<endl;
	for(int i = front ;i<= rear;i++){
		cout<<q[i]<<" ";
	}
	cout<<"\n\nPress any key to continue."<<endl;
	getch();
	return;
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
