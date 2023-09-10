#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int info;
	struct list *next;
}node;
int main()
{
	node *temp,*ptr,*head=NULL;
	int tn,i,dv;
	printf("Enter How Many Nodes You Want To Insert :: ");
	scanf("%d",&tn);
	for(i=1;i<=tn;i++){
		temp=(node*)malloc(sizeof(node));
		printf("Enter Element[%d]:: ",i);
		scanf("%d",&temp->info);
		temp->next=NULL;
		if(head==NULL)
		{
			head = ptr = temp;
		}
		else
		{
			temp->next=ptr;
			head = ptr = temp;
		}
	}
	head=ptr;
	printf(" %d ",ptr->info);
	while(head!=NULL){
		ptr=ptr->next;
		printf(" <- %d",ptr->info);
	}
	head=ptr;
	printf("\n\nEnter The Element That You Want To Deleate :: ");
	/*scanf("%d",&dv);
	head=ptr;
	printf(" %d ",ptr->info);
	while(head!=NULL){
		if(ptr->info==dv)
		{
			ptr->info = NULL;
		}
		else{
			ptr=ptr->next;
			printf(" <- %d",ptr->info);
		}
	}*/
	free(ptr);
	return 0;
	
}
