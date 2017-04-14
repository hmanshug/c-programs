#include <stdio.h>
void factorial(int *);

void factorial(int *n) {
	
	int i;
	for (i=(*n)-1; i>=1; i--) {
		*n=(*n)*i;
	}
	
}

int main () {
	int fact;
	printf("Enter no");
	scanf("%d",&fact);
	factorial(&fact);
	printf("%d",fact);
	return 0;
}


