#include <stdio.h>

void add(int );
void display(void);

struct slink {
	int data;
	struct slink *next;
};

struct slink *head;

int main() {
	add(2);
	add(1);
	add(0);
	add(4);
	add(2);
	add(9);
	add(0);
	add(-5);
	
	display();
	return 0;
}

void add(int data) {
	struct slink *temp= (struct slink *)malloc(sizeof(struct slink));
	temp->data=data;
	
	if(head==NULL) {
		head=temp;
		temp->next= NULL;
	} else {
		struct slink *p=head;
		struct slink *q=head;
		
		while(1) {
			if(data<head->data) {
				temp->next=head;
				head=temp;
				break;
			}
			
			if(p==NULL) {
				q->next=temp;
				temp->next=NULL;
				break;
			}
			
			if(data<p->data) {
				q->next = temp;
				temp->next= p;
				break;
				
			} else {
				q=p;
				p= p->next;
			}
		}
		
	}
	
}

void display() {
	struct slink *temp=head;
	
	while(temp!=NULL) {
		printf("%d ", temp->data);
		temp= temp->next;
	}
}
