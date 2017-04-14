#include <stdio.h>

int main() {
	char num, i;
	int *sum=0;
	
	scanf("%d", &num);
	if(num<=40 && num>=0) {
	
		for(i=1; i<=num; i++) {
			sum= sum+ i*i*i*i;
		}
		printf("%d", sum);
	}
}
