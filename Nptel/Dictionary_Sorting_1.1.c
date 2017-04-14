#include <stdio.h>

int word2num(char *);
int poweroften(int );
void quicksort(int *, int , int);
void swap(int *, int, int);
int maxrep(int *, int );

int main() {
	
	int tcases;
	scanf("%d", &tcases);
	int i, data[tcases+1];
	char str[9];
	
	for(i=0; i<tcases; ++i) {
		scanf("%s", str);
		data[i]= word2num(str);
		
		//printf("%d ", data[i]);
	}
	
	quicksort(data, 0, tcases);
	printf("%d\n", maxrep(data, tcases));
	/*
	for(i=0; i<tcases; i++) {
		printf("%d ", data[i]);
	}*/
}

int word2num(char *str) {
	int length;
	int i, k=0, num=0;
	int key;
	
	for(length=0; str[length]!= '\0'; ++length);
	
	for(i=length-1; i>=0; i--, k++) {
		if(str[i]== 'a' || str[i]=='b' || str[i]=='c')
			key=2;
		else if(str[i]== 'd' || str[i]=='e' || str[i]=='f')
			key=3;
		else if(str[i]== 'g' || str[i]=='h' || str[i]=='i')
			key=4;
		else if(str[i]== 'j' || str[i]=='k' || str[i]=='l')
			key=5;
		else if(str[i]== 'm' || str[i]=='n' || str[i]=='o')
			key=6;
		else if(str[i]== 'p' || str[i]=='q' || str[i]=='r' || str[i]=='s')
			key=7;
		else if(str[i]== 't' || str[i]=='u' || str[i]=='v')
			key=8;
		else if(str[i]== 'w' || str[i]=='x' || str[i]=='y' || str[i]=='z')
			key=9;
				
		num=num+ poweroften(k)* key;
	}
	
	return num;
}

int poweroften(int i) {
	if(i==0)
	return 1;
	
	return 10*poweroften(i-1);
}

void quicksort(int *A, int l, int r) {
	//printf("heello ");
	int yellow=0, green=0;
	
	if((r-l)<=1) 
	return ;
	
	yellow= l+1;
	
	for(green= l+1; green<r; green++) {
		if(A[green]<= A[l]) {
			swap(A, yellow, green);
			yellow++;
		}
	}
	
	swap(A, l, yellow-1);
	
	quicksort(A, l, yellow-1);
	quicksort(A, yellow, r);
	
}

void swap(int *a, int l, int r) {
	int temp;
	temp=*(a+l);
	*(a+l)=*(a+r);
	*(a+r)=temp;
}

int maxrep(int *data, int size) {
	int ptr, count=0;
	int i;
	int max=0;
	
	data[size]= -1;
	
	for(i=1; i<=size; i++) {
		if(data[i]==data[i-1]) {
			count++;
		} 
		else {
			//count++;
			if(count+1>max) {
				max=count+1;
				ptr=i-1;
			}
			count=0;
		}
	}
	
	if(max==0)
	return data[0];
	else
	return data[ptr];
}
