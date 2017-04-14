#include <stdio.h> 

int* insertleft(int *, int );
int* insertright(int *, int );
int retrievelast(int *);
int retrievefirst(int *);

int main() {
	int dq[10]={0};
	int *first=dq+5;
	int *last=dq+6;
	int i;
	
	first=insertleft(first, 10);
	last=insertright(last, 20);
	last=insertright(last, 30);
	first=insertleft(first, 40);
	first=insertleft(first, 50);
	last=insertright(last, 60);
	
	for(i=0; i<10; i++)
	printf("%d ", dq[i]);
	printf("\n");
	
	printf("%d ", retrievefirst(first));
	printf("%d", retrievelast(last));
	
	return 0;
}

int* insertleft(int *first, int n) {
	*first=n;
	return(--first);
}

int* insertright(int *last, int n) {
	*last=n;
	return(++last);
}

int retrievefirst(int *first) {
	return *++first;
}

int retrievelast(int *last) {
	return *--last;
}
