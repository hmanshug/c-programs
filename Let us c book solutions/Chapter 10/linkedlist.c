#include <stdio.h>
#include<stdlib.h>

void addFirst(int );
void addLast(int );
int removeFirst(void);
int removeLast(void);
void dispaly();

struct link {
	int data;
	struct link *ptr;
};
struct link *head;
struct link *tail;
int main() {

	
	addFirst(1);
	addFirst(2);
	addFirst(3);
	addLast(1);
	addLast(2);
	addLast(3);
	display();
	
	printf("\n");
	
	printf("Retrieved value:%d\n", removeFirst());
	
	display();
	
	return 0;
}

void addFirst(int data) {
//	struct link node;
//	node.data=data;
	struct link *node= (struct link*)malloc(sizeof(struct link));
	node->data=data;
	
	if(head==NULL) {
		//printf("ff");
		head=node;
		tail=node;
		node->ptr=NULL;
	} else {
		//printf("hh");
		node->ptr=head;
		head=node;
	}
	//printf("%d ", node->data);
	//printf("%d ", head->data);
	//printf("%d ", tail->data);
}

void addLast(int data) {
	struct link *node= (struct link*)malloc(sizeof(struct link));
	node->data=data;
	
	if(tail==NULL) {
		head=node;
		tail=node;
		node->ptr=NULL;
	} else {
		tail->ptr= node;
		node->ptr=NULL;
		tail=node;
	}
	
}

int removeFirst() {
	struct link *temp=head->ptr;
	int data= head->data;
	free(head);
	head=temp;
	
	return data;
}
/*
int removeLast() {
	struct link *temp=tail->ptr;
	int data= head->data;
	free(head);
	head=temp;
	
	return data;
}
*/
void display() {
	struct link *n=head;
	while(n!=NULL) {
		printf("%d ", n->data);
		n= n->ptr;
	}
}
