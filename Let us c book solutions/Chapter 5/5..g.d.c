#include <stdio.h>

void norec_prime(int ,int *);
void rec_prime(int );

int main() {
	int prime[10]={0};
	printf("Enter number");
	int n;
	scanf("%d", &n);
	
	norec_prime(n, &prime[0]);
	int i;
	for(i=0; i<10; i++) {
		printf("%d", prime[i]);
	}
	printf("\n");
	rec_prime(n);
	return 0;

}

void norec_prime(int a,int *pr) {
	
	int i, count=0;
		for(i=2; i<=a; i++) {
			
		
			 
			if(a%i==0) {
				*(pr+count)= i;
				count++;
				a=a/i;
				i=i-1;
			
		}
	}

}

void rec_prime(int a) {
	static int i=2;
	
	if(i<=a) {
		if(a%i==0) {
			printf("%d\t", i);
			a=a/i;
		}
		else 
		i++;
		
		rec_prime(a);
		
	}
	return;
	
	
}

