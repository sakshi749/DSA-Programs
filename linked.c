#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;

void ins_beg(struct node*);
void ins_end(struct node*);
void del_beg();
void del_end();
void traverse1();
void traverse2();
int count_nodes(); // Function to count total number of nodes

int main() {
	int choice;
	struct node *new1;
	
	while(1) {
		printf("\nenter the choice\n");
		printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5. traverse1\n6. traverse2\n7. count nodes\n8. exit\n");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				new1 = (struct node*)malloc(sizeof(struct node));
				printf("enter the data\n");
				scanf("%d", &new1->data);
				new1->next = NULL;
				new1->prev = NULL;
				ins_beg(new1);
				break;
			case 2:
				new1 = (struct node*)malloc(sizeof(struct node));
				printf("enter the data\n");
				scanf("%d", &new1->data);
				new1->next = NULL;
				new1->prev = NULL;
				ins_end(new1);
				break;
			case 3:
				del_beg();
				break;
			case 4:
				del_end();
				break;
			case 5:
				traverse1();
				break;
			case 6:
				traverse2();
				break;
			case 7:
				printf("Total number of nodes: %d\n", count_nodes());
				break;
			case 8:
				exit(0);
			default:
				printf("Invalid choice!\n");
		}
	}
	return 0;
}

void ins_beg(struct node *new1) {
	if(head == NULL)
		head = new1;
	else {
		head->prev = new1;
		new1->next = head;
		head = new1;
	}
}

void ins_end(struct node *new1) {
	struct node *temp = head;
	if(head == NULL)
		head = new1;
	else {
		while(temp->next != NULL)
			temp = temp->next;
		new1->prev = temp;
		temp->next = new1;
	}
}
		
void del_beg() {
	if(head == NULL)
		printf("No item to delete\n");
	else {
		struct node *temp = head;
		head = head->next;
		if(head != NULL)
			head->prev = NULL;
		free(temp);
	}
}

void del_end() {
	if(head == NULL)
		printf("No item to delete\n");
	else {
		struct node *temp = head;
		struct node *prev = NULL;
		while(temp->next != NULL) {
			prev = temp;
			temp = temp->next;
		}
		if(prev != NULL)
			prev->next = NULL;
		free(temp);
	}
}

void traverse1() {
	struct node *temp = head;
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void traverse2() {
	struct node *temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
//created by sakshi
int count_nodes() {
	int count = 0;
	struct node *temp = head;
	while(temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}