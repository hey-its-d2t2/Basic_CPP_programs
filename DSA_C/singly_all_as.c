/*A C Program to perform the various operations on Singly Linked List.*/
#include<stdio.h>
#include<conio.h>
//#include<alloc.h>
#include<stdlib.h>
typedef struct list
{
int info;
struct list *next;
}node;
node *head; int fail=0;
int main()
{
void empty();
void menu();
//clrscr();
empty();
menu();
printf("\nProgram Developed By:\nDr. Anand Kr. Pandey,");
printf("\nAsstt. Professor, T. N. B. College,");
printf("\nBhagalpur.\nemail:anandpandeyonly4u@gmail.com");
printf("\nMob. No: 9534329101.");
printf("\n\n\nTHANK YOU!!");
getch();
}
void empty()
{
head=NULL;/*Initialize the list*/
}
void menu()
{
int choice;
void operation(int);
clrscr();
printf("\n*******Choice Menu*******");
printf("\n1. CREATE NEW LIST.");
printf("\n2. DISPLAY THE LIST.");
printf("\n3. INSERT ELEMENT AT BEGINNING.");
printf("\n4. INSERT ELEMENT AT END.");
printf("\n5. INSERT ELEMENT AT GIVEN POSITION.");
printf("\n6. DELETE THE FIRST ELEMENT.");
printf("\n7. DELETE THE LAST ELEMENT.");
printf("\n8. DELETE ANY GIVEN ELEMENT.");
printf("\n9. SEARCH ANY ELEMENT.");
printf("\n10. COUNT THE TOTAL NO. OF ELEMENTS.");
printf("\n11. REPLACE ANY ELEMENT.");
printf("\n12. EXIT.");
l:printf("\nEnter your choice(1-12):");
scanf("%d",&choice);
if(choice>12)
{
printf("Invalid Choice!!Try Again.....");
goto l;
}
operation(choice);
}
void operation(int choice)
{
node *temp;
int n,i,ele,pos,x;
node* create(int);
void display();
void empty();
void insert_at_beg(node*);
void insert_at_end(node*);
void insert_at_pos(int,node*);
void del_ele(int);
void del_first();
void del_last();
void count();
void search(int);
void replace(int,int);
fail=0;
switch(choice)
{
case 1:
empty();
printf("Enter the value of N:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the element for node number %d:",i);
scanf("%d",&ele);
temp=create(ele);
insert_at_end(temp);
}
if(i==n+1)
printf("%d nodes have been created successfully!!",n);
printf("\nCreated nodes are as follows:\n");
break;
case 2:
//display();
break;
case 3:
printf("Enter the element to which you want to insert at beginning");
scanf("%d",&ele);
temp=create(ele);
insert_at_beg(temp);
printf("\nThe element %d has been inserted successfully atthe beginning of the list.\n",ele);
break;
case 4:
	printf("Enter the element to which you want to insert at end:");
scanf("%d",&ele);
temp=create(ele);
insert_at_end(temp);
printf("\nThe element %d has been inserted successfully at the end of the list.\n",ele);
break;
case 5:
display();
printf("\nEnter the element to which you want to insert:");
scanf("%d",&ele);
printf("Enter the position:");
scanf("%d",&pos);
temp=create(ele);
insert_at_pos(pos,temp);
if(fail==0)
printf("\nThe element %d has been inserted successfully at position %d.\n",ele,pos);
break;
case 6:
display();
del_first();
if(fail==0)
printf("\nThe first element of the list has been deleted successfully.\n");
break;
case 7:
display();
del_last();
if(fail==0)
printf("\nThe last element of the list has been deleted successfully.\n");
break;
case 8:
	display();
printf("\nEnter the element to which you want to delete:");
scanf("%d",&ele);
del_ele(ele);
break;
case 9:
printf("\nEnter the element to which you want to search:");
scanf("%d",&ele);
search(ele);
break;
case 10:
display();
count();
break;
case 11:
display();
printf("\nEnter the to which you want to replace:");
scanf("%d",&ele);
printf("Replace with:");
scanf("%d",&x);
replace(ele,x);
break;
case 12:
return;
default:
printf("Invalid Choice!!Try Again.....");
}
display();
printf("\n\n\nPress any key to display the choice MENU..........");
getch();
//menu();
return 0;
}
node* create(int ele)
{
	node *temp;
temp=(node*)malloc(sizeof(node));
if(temp==NULL)
{
printf("\nIn-sufficient Memory!! Therefore no new node can be created.");
exit(0);
}
temp->info=ele;
temp->next=NULL;
return(temp);
}
void insert_at_end(node *temp)
{
node *ptr;
if(head==NULL)
{
head=temp;
return;
}
ptr=head;
while(ptr->next!=NULL)
ptr=ptr->next;
temp->next=ptr->next;
ptr->next=temp;
}
void insert_at_beg(node *temp)
{
if(head==NULL)
{
head=temp;
return;
}
temp->next=head;
head=temp;
}
void display()
{
node *ptr;
if(head==NULL)
{
printf("\nList is Empty.\n");
return;
}
printf("\n");
ptr=head;
while(ptr->next!=NULL)
{
printf("%d-->",ptr->info);
ptr=ptr->next;
}
printf("%d.",ptr->info);
}
void insert_at_pos(int pos,node *temp)
{
node *ptr,*ptr1;
int i=2;
if(head==NULL && pos>1)
{
 printf("\nList is empty. Therefore new item can't be inserted at position %d.",pos);
 fail=1;
 return;
}
if(pos==1)
{
 insert_at_beg(temp);
 return;
}
ptr=head;
while(ptr->next!=NULL && i!=pos)
{
i++;
ptr=ptr->next;
}
if(i==pos)
{
ptr1=ptr->next;
ptr->next=temp;
temp->next=ptr1;
}
else
{
printf("\nPosition %d not found in the list. Therefore new item can't be inserted at position %d.",pos,pos);
fail=1;
}
}
void del_first()
{
node *ptr;
if(head==NULL)
{
printf("\nList is Empty.Therefore no any element can be deleted from the list.");
fail=1;
return;
}
ptr=head;
head=head->next;
free(ptr);
}
void del_last()
{
node *ptr,*ptr1;
if(head==NULL)
{
printf("\nList is Empty.Therefore no any element can be deleted from the list.");
fail=1;
return;
}
/*checking the 1st node*/
if(head->next==NULL)
{
ptr1=head;
head=NULL;
free(ptr1);
return;
}
ptr=head;
while(ptr->next->next!=NULL)
ptr=ptr->next;
ptr1=ptr->next;
ptr->next=NULL;
free(ptr1);
}
void del_ele(int ele)
{
node *ptr,*ptr1;
int cnt=0;
if(head==NULL)
{
printf("List is Empty.");
return;
}
if(head->next==NULL && head->info==ele)
{
cnt++;
ptr1=head;
head=NULL;
free(ptr1);
return;
}
while(ptr!=NULL)
{
ptr=head;
while(ptr->next!=NULL && ptr->info!=ele)
{
ptr1=ptr;
ptr=ptr->next;
}
if(ptr->info==ele && head==ptr)
{
cnt++;
head=ptr->next;
free(ptr);
}
else if(ptr->info==ele && head!=ptr)
{
cnt++;
ptr1->next=ptr->next;
free(ptr);
}
ptr=ptr->next;
}
if(cnt==0)
printf("\nElement %d not found in the list. Hence, No any element will be deleted from the list.",ele);
else if(cnt==1)
printf("\nElement %d has been deleted successfully from the list.",ele);
else
printf("\nTotal %d elements have been deleted from the list.",cnt);
}
void search(int ele)
{
node *ptr;
int found=0;
int pos=0;
if(head==NULL)
{
printf("\nList is Empty.");
return;
}
ptr=head;
while(ptr!=NULL)
{ if(ptr->info==ele)
found++;
ptr=ptr->next;
}
if(found>0)
{
printf("\nElement %d found at position:",ele);
ptr=head;
while(ptr!=NULL)
{
pos++;
if(ptr->info==ele)
printf("%d ",pos);
ptr=ptr->next;
}
}
else
printf("\nElement %d not found in the list.",ele);
}
void count()
{
node *ptr;
int cnt=0;
if(head==NULL)
{
printf("\nList is Empty.");
return;
}
ptr=head;
while(ptr!=NULL)
{
cnt++;
ptr=ptr->next;
}
printf("\nThe total number of elements in this list is:%d",cnt);
}
void replace(int ele,int x)
{
node *ptr;
int cnt=0;
if(head==NULL)
{
printf("List is Empty.");
return;
}
ptr=head;
while(ptr!=NULL)
{
if(ptr->info==ele)
{
cnt++;
ptr->info=x;
}
ptr=ptr->next;
}
if(cnt==0)
printf("Element %d not found in the list.\n",ele);
else if(cnt==1)
printf("%d element has been replaced successfully.\n",cnt);
else
printf("%d elements have been replaced successfully.\n",cnt);
}
