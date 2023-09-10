/* A Singly Linked List Program In C For  Inputing Four Values And 
Print Them Directly And Using loop */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct list{
	int data;
	struct list *next;
}l;
int main(){
	 l * box,*box2,*box3,*box4;
	 box = (l *)malloc(sizeof(l));
	 box2 = (l *)malloc(sizeof(l));
	 box3 = (l *)malloc(sizeof(l));
	 box4 = (l *)malloc(sizeof(l));

	printf("Enter First Data : ");
	scanf("%d",&box->data);
	printf("Enter Second Data : ");
	scanf("%d",&box2->data);
	printf("Enter Third Data : ");
	scanf("%d",&box3->data);
	printf("Enter Fourth Data : ");
	scanf("%d",&box4->data);
	
	printf("::::::::::::::::::::::::::::::");
	
	printf("\nThe Data Values are :\n");
	printf(" Value 1 : %d",box->data);
	printf("\n Value 2 : %d ",box2->data);
	printf("\n Value 3 : %d",box3->data);
	printf("\n Value 4 : %d",box4->data);
	
	printf("\n\n::::::::::::::::::::::::::::::::\n");
	printf("\n Data Using Loop : \n");

	 box->next =box2;
	 box2->next = box3;
	 box3->next = box4;
	 box4->next = NULL;
	 while(box!=NULL){
	 	printf("%d ",box->data);
	 	box=box->next;
	 }
	 
	getch();
	return 0;
}
