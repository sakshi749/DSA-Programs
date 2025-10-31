//created by sakshi
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;

void ins_beg(struct node*);
void ins_end(struct node*);
void del_beg();
void del_end();
void traverse();

int main(){
	int choice, n;
	struct node *new1;
	
	while(1){
		printf("\nenter the choice\n");
		printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5. traverse\n6. exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					ins_beg(new1);
					break;
			case 2:
					new1 = (struct node*)malloc(sizeof(struct node));
					printf("enter the data\n");
					scanf("%d",&new1->data);
					new1->next = NULL;
					ins_end(new1);
					break;
			case 3:
					del_beg();
					break;
			case 4:
					del_end();
					break;
			case 5: 
					traverse();
					break;
			default:
					exit(1);
		}
	}
}
//created by sakshi
	void ins_beg(struct node *new1){
			struct node *temp = head;
		if(head == NULL)
			{
				head = new1;
				head->next = head;
			}
		else{
			while(temp->next != head)
				temp = temp->next;
			new1->next = head;
			temp->next = new1;
			head = new1;
		}
	}
	//created by sakshi
	void ins_end(struct node *new1){
		struct node *temp = head;
		if(head == NULL)
			{
				head = new1;
				head->next = head;
			}
		else{
			while(temp->next!= head)
				temp = temp->next;
			temp->next = new1;
			new1->next = head;
			}
		}
	//created by sakshi	
	void del_beg(){
		struct node *temp = head;
		struct node *temp1 = head;
	if(head == NULL)
		printf("no elements in the list\n");
	else if(head->next == head){
		printf("Item deleted from the head  = %d\n",head->data);
		head = NULL;
	}
	else{
		while(temp->next!=head)
			temp = temp->next;
		printf("Item deleted from the head  = %d\n",head->data);
		head = head->next;
		temp->next = head;
		free(temp1);
		temp1 = NULL;
		
		}
		}
	//created by sakshi		
void del_end(){
    struct node *temp = head;
    struct node *temp1 = head;
    
    if(head == NULL){
        printf("No elements in the list");
    }
    else if(head->next == head){
        head = NULL;
        free(temp);
    }
    else{
        while(temp1->next != head)
            temp1 = temp1->next;

        while(temp->next != temp1)
            temp = temp->next;
		temp1->next = NULL;
		temp->next = head;
		free(temp1);
		temp1 = NULL;
    }
}

	//created by sakshi
	void traverse(){
	struct node *temp = head;
	if(head == NULL)
		printf("no elements in the list\n");
	else{
		do{
			printf("\t%d",temp->data);
			temp = temp->next;
			}while(temp!= head);
		}
	}
	
