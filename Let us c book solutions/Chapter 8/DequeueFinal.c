#include <stdio.h>

void insertleft(int );
void insertright(int );
int retrieveleft();
int retrieveright();
void display();

int *left= NULL;
int *right= NULL;
int sample[25];

int main() {
	insertleft(25);
	insertleft(30);
	insertleft(35);
	insertright(5);
	insertright(10);
	
	display();
	printf("\n");
	
	printf("Retrieved value: %d", retrieveright());
	printf("Retrieved value: %d", retrieveleft());
	/*
	printf("Retrieved value: %d", retrieveright());
	printf("Retrieved value: %d", retrieveright());
	printf("Retrieved value: %d", retrieveright());
	printf("Retrieved value: %d", retrieveright());
	printf("Retrieved value: %d", retrieveright());
	*/
	printf("\n");
	display();
	
	return 0;
}

void insertleft(int n) {
	int i;
	if((right-left) != 25) {
	
		if(left==NULL) {
			left= sample;
			*left= n;
			right= sample+1;
			 
		} else {
			
			for(i=right-left-1; i>=0; i--) {
				sample[i+1]= sample[i];
			}
			right++;
			*left= n;
		}
	} else
	printf("Queue Full");
}

void insertright(int n) {
	if(right-left != 25) {
		*right=n;
		right++;
		
	} else {
		printf("Queue Full");
	}
}

int retrieveleft() {
	int n, i;
	
	n= *left;
	
	
	for(i=1; i< right-left; i++) {
				sample[i-1]= sample[i];
			}
	left=sample;
	right--;
	return n;
}

int retrieveright() {
	int n;
	if(right!= NULL) {
		if(right-left==0) {
			right=NULL;
			left=NULL;
		}
		n= *(--right);
		*right = 0;
		return n;
	} else {
		printf("Queue Empty");
		return -1;
	}
}
void display() {
	int i;
	for(i=0; i<right-left; i++) {
		printf("%d ", sample[i]);
	}
}
