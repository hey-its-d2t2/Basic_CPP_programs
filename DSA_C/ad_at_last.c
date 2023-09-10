#include<stdio.h>
#include<stdlib.h>
typedef struct d_list{
	struct d_lsit *prev;
	int info;
	struct d_list *next;
}node;
int main(){
	node *ptr,*head=NULL,*tail=NULL,*temp;
	int tn,i=1;
	printf("Enter Total No. Of Nodes :: ");
	scanf("%d",&tn);
	while(i<=tn){
		temp = (node*)malloc(sizeof(node));
		printf("Enter Element [%d] ::- ",i);
		scanf("%d",&temp->info);
		temp->prev = NULL;
		temp->next = NULL;
		if(head==NULL){
			head = ptr= temp;
			temp->prev=head;
		}		
		else{
			ptr->next=temp;
			temp->prev	= ptr;
			tail=temp;
			ptr=ptr->next;		
		}
		i++;
	}
	ptr=head;
	//head=ptr;
	while(ptr!=NULL){
		printf("%d ->",ptr->info);
		ptr=ptr->next;
	}
	//tail=ptr;
	ptr=tail;
	printf("\n In Backward Direction::\n\n");
	while(ptr!=head){
			printf("%d ->",ptr->info);
			ptr=ptr->prev;
	}
	printf("%d ->",ptr->info);
	return 0;
}
