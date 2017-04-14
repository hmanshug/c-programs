#include <stdio.h>

int rec_sum(int );
int sum(int );

int main() {
	
	printf("Enter 5 digit number");
	int n;
	scanf("%d", &n);
	int sum1=rec_sum(n);
	int sum2=sum(n);
	printf("%d %d", sum1, sum2);
	return 0;

}

int rec_sum(int a) {
	
	
	int sum;
	if(a==0)
	return 0;
	else {
		sum=a%10 + rec_sum(a/10);
	}
	return sum;
}

int sum(int a) {
	
	int sum;
	while(a!=0) {
		sum=sum+a%10;
		a=a/10;
	}
	
	return sum;
}
