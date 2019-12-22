//Tue Jun 26 21:59:47 IST 2018 

#include <stdio.h>
#include <stdlib.h>		//<stdlib.h> contains declaration of malloc() and free()

struct NODE
{
int g_value;
struct NODE *next;
};

void insert_at_begining(struct NODE** head_ref,int data)
{
  	struct NODE *ptr1 = (struct NODE *)malloc(sizeof(struct NODE));	//new node to be added
	struct NODE *temp=*head_ref;	//temporary node use to get end point

	ptr1->g_value=data;
	ptr1->next=*head_ref;

	if(*head_ref!=NULL){	//if already nodes are on list

		while(temp->next!=*head_ref)
			temp=temp->next;
		temp->next=ptr1;
	}
	else{			//if list is empty
		ptr1->next=ptr1;
	}
	*head_ref=ptr1;
}

void print_list(struct NODE* head)
{
	struct NODE *temp=head;

	if(head!=NULL){
		do{
			printf("%d \t",temp->g_value);
			temp=temp->next;
		}while(temp!=head);
	}
}

int main(void)
{
	struct NODE *head=NULL;

	insert_at_begining(&head,5);
	insert_at_begining(&head,1);
	insert_at_begining(&head,2);
	insert_at_begining(&head,3);
	insert_at_begining(&head,4);

	print_list(head);

	printf("\n");

	print_list(head);

	printf("\n");
return 0;
}

