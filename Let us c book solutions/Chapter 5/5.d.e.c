#include <stdio.h>
void prime_factor(int);


int main() {
	printf("Enter no");
	int no;
	scanf("%d", &no);
	prime_factor(no);
	return 0;
}

void prime_factor(int n) {
	int i;
	
	for(i=2; i<=n; i++) {
		if(n%i==0) {
			printf("%d\n", i);
			n=n/i;
			i=i-1;
			if(n==1)
				break;
		}
	}
}
