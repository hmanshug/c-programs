# include <stdio.h>

void fibonacci(unsigned int ,unsigned int );

int main() {
	int a=0,b=1;
	fibonacci(a,b);
	return 0;
}

void fibonacci(unsigned int a, unsigned int b) {
	
	
	static int count=1;
	if(count==1) {
		printf("%u\n%u\n", a,b);
	}
	if(count==48)
	return;
	printf("%u\n", a+b);
	count++;
	fibonacci(b, a+b);
}


