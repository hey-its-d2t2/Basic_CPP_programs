/*  A C Program Of Singly Linked List 
	For Creating Nodes and Inserting The Values
	At The End of Each Node , And Displaying 
	The Values of Each Node.
	Input -->Using -> For Loop, While Loop 
	And Do While Loop.
	Output -->Using->For Loop, While Loop
	And Do While Loop. 
*/	 	
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Defining The Structure
typedef struct node{
	int info;
	struct node *next;
}node;

int main(){
 	
 	// Declaring The Variables
	node *ptr,*temp,*head = NULL;
 	int i,tn;
	char mch;

	system("cls");

 	printf("\n\Select The Loop By Using Insert Values \n");
 	printf("[1.] For Loop ");
 	printf("\n[2.] While Loop");
 	printf("\n[3.] Do While Loop ");
	mch = getche();
	
	switch(mch)
	{
		case '1':
		{
			system("cls");
			printf("\n\n*You Select \n[1.] For Loop");
 			//Inputting The Total Numbers Of Nodes 
 			printf("\n\nEnter Hoe Many Nodes :: ");
 			scanf("%d",&tn);
 			
			//Process
			
			//Using For Loop
 			for(i=1;i<=tn;i++)
			{
				//Allocating The Memory ---> for --> temp ,Variable
  		
		  		temp = (node*)malloc(sizeof(node));
  		
				// Input The Elements 
 				printf("Element [%d]:: ",i);
 				scanf("%d",&temp->info);
 				temp->next = NULL;
 				//Connect The First Node To The Head 
				//and Copy the address of temp in ptr
 		
				 if(head == NULL)
 				{
 					head = ptr = temp;
				}
		
				//Connect  The Another Nodes 
	
				else
				{
					ptr->next = temp;
					ptr  = ptr->next;
				}
    		}
    		break;
        }
    	case '2':
    	{
    		system("cls");
			printf("\n\n*You Select \n[2.] While Loop");
 			//Inputting The Total Numbers Of Nodes 
 			printf("\n\nEnter Hoe Many Nodes :: ");
 			scanf("%d",&tn);
    
    
    		// Using While Loop
    
    		while(i!=tn)
    		{
    				//Allocating The Memory ---> for --> temp ,Variable
  		
		  			temp = (node*)malloc(sizeof(node));
  		
					// Input The Elements 
 					printf("Element [%d]:: ",i+1);
 					scanf("%d",&temp->info);
 					temp->next = NULL;
 		
					//Connect The First Node To The Head 
					//and Copy the address of temp in ptr
 		
					 if(head == NULL)
 					{
 						head = ptr = temp;
					}
		
					//Connect  The Another Nodes 
	
					else
					{
					ptr->next = temp;
					ptr  = ptr->next;
				}
					i++;
			}
			break;
		}
		case '3':
		{
			system("cls");
			printf("\n\n*You Select \n[3.] Do While Loop");
 			//Inputting The Total Numbers Of Nodes 
 			printf("\n\nEnter Hoe Many Nodes :: ");
 			scanf("%d",&tn);
 			//Using Do While Loop
    
    	do
    	{
    			//Allocating The Memory ---> for --> temp ,Variable
  		
		  		temp = (node*)malloc(sizeof(node));
  		
				// Input The Elements 
 				printf("Element [%d]:: ",i+1);
 				scanf("%d",&temp->info);
 				temp->next = NULL;
 		
				//Connect The First Node To The Head 
				//and Copy the address of temp in ptr
 		
		 		if(head == NULL)
 				{
 					head = ptr = temp;
				}
		
				//Connect  The Another Nodes 
	
				else
				{
					ptr->next = temp;
					ptr  = ptr->next;
				}
					i++;	
			}while(i<tn);
    	break;
		}
	}
   
    system("cls");

    //------------------------------------------------------
	//Printing / Displaying The Entered Values
	mch='0';
	printf("\n\tSelect The Loop By Using Print Values \n");
 	printf("[1.] For Loop ");
 	printf("\n[2.] While Loop");
 	printf("\n[3.] Do While Loop ");
 	mch=getche();
 	switch(mch)
 	{
 		//Using ---> For Loop     
		case'1':
		{
			system("cls");
			printf("\n\n*You Select \n[1.] For Loop");
				
				//Connecting The ptr  to head
				ptr = head;
				//Without  Arrow
				printf("\n\n\t\tUsing For Loop : \n");
    			printf("Without Arrow\n");
				for(ptr;ptr!=NULL;ptr=ptr->next)
				{
					printf("%d ",ptr->info);
				}
	
				//With Arrow
				//Connecting The ptr  to head
				ptr = head;
				printf("\nWith Arrow\n");
				for(ptr;ptr->next != NULL;ptr = ptr->next)
				{
					printf("%d -> ",ptr->info);
				}
				printf("%d .",ptr->info);
			break;
		} 
		
		//Using ---> While Loop
		case'2':
		{
			system("cls");
			printf("\n\n*You Select \n[2.] While Loop"); 
			//Connecting The ptr  to head
    		ptr = head;
    		printf("\n\n\t\tUsing While Loop : \n");
    		printf("Without Arrow\n");
			//Without Arrow
			while(ptr!=NULL)
			{
				printf("%d ",ptr->info);
				ptr= ptr->next;
			} 
			//With Arrow
			printf("\nWith Arrow\n");
			//Connecting The ptr  to head
			ptr = head;
	
			while(ptr->next != NULL)
			{
				printf("%d -> ",ptr->info);
				ptr = ptr->next;
			}
			printf("%d .",ptr->info);
			break;
		}
		
		//Using ---> Do While Loop 
		case'3':
		{
			system("cls");
			printf("\n\n*You Select \n[3.] Do While Loop");
			//Connecting The ptr  to head
   			ptr = head;
   
   			printf("\n\n\t\tUsing Do While Loop : \n");
 		   printf("Without Arrow\n");
    
    		do{	
    			printf("%d ",ptr->info);
    			ptr = ptr->next;
			}while(ptr!=NULL);
	
			//Connecting The ptr  to head
    		ptr = head;
			printf("\nWith Arrow\n");
			do{
				printf("%d -> ",ptr->info);
				ptr = ptr->next;
			}while(ptr->next != NULL);
			printf("%d .",ptr->info);
			break;
		}		
	}
 	return 0; 
}	


