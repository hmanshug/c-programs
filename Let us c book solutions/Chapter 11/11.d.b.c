#include <stdio.h>

int getint();

int main() {
	int a;
	a=getint();
	printf("you enterd %d\n", a);
	return 0;
}

int getint() {
	char num[100];
	char *p=num, *b=num;
	gets(num);
	
	int i;
	for(i=0; i<100;i++) 
	{
		if(*b== '\0')
		break;  //strlen();
		
		b++;
	}
	int count=i, n=i-1;
	int num1=0;
	for(i=0; i<count; i++) {
		
		num1=  (*(p + i)-'0') * ((int) pow(10,n)) + num1; // Warning? what int is doing?
		n--;
	}
	return num1;
}
