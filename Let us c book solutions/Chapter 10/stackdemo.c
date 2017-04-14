#include <stdio.h>
#include <malloc.h>

void add(int );
int del();
void display();

struct stackDemo{
	int data;
	struct stackDemo *next;
};

struct stackDemo *top;


int main() {
	add(1);
	add(22);
	add(333);
	add(4444);
	add(5555);
	
	display();
	printf("\n");
	
	printf("deld: %d\n", del());
	printf("deld: %d\n", del());
	printf("deld: %d\n", del());
	display();
	
	return 0;
}

void add(int data) {
	struct stackDemo *temp= (struct structDemo *) malloc(sizeof(struct stackDemo));
	temp->data= data;
	
	if(top==NULL) {
		top=temp;
		temp->next= NULL;
	} else {
		temp->next= top;
		top= temp;
	}
}

int del() {
	int data= top->data;
	struct stackDemo *temp= top;
	top= top->next;
	free(temp);
	return data;
}

void display() {
	struct stackDemo *temp=top;
	while(temp!=NULL) {
		printf("%d ", temp->data);
		temp= temp->next;
	}
}
