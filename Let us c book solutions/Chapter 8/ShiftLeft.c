#include <stdio.h>

void rsl(int *);

int main() {
	
	int arr[4][5] = {
						1,2,3,4,5,
						6,7,8,9,10,
						1,2,3,4,5,
						6,7,8,9,10,
						};
						
	rsl(*arr);
	
	
	int i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<5;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void rsl(int *a) {
	int (*t)[5]= (int (*)[5]) a;
	int i,j;
	int b[5];
	for(i=0; i<4; i++) {
	
	for(j=0; j<5; j++) {
		b[(j-2+5)%5]=*((a+5*i)+j);
	}
	for(j=0;j<5;j++)
	printf("%d ",b[j]);
	(t+i) = b;
	printf("\n");
	}
	

}
