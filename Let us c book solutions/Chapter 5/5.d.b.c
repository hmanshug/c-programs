#include <stdio.h>

float power(float , int );

int main() {
	float a;
	int b;
	printf("Enter number a and b");
	scanf("%f %d",&a,&b);
	a=power(a,b);
	printf("%f",a);
	return 0;
}

float power(float p, int q) {
	int i; 
	float res=1;
	for(i=1; i<=q; i++) {
		res=res*p;
	}
	return res;
	
}
