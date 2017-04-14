#include <stdio.h>

int main() {
	char str1[]="Hello";
	char *ptr="Hello";
	//str1="Bye";
	ptr="Bye";
	printf("%s\n",ptr);
	
	
	//str1++;
	*str1='z';
	ptr++;
	//*ptr='M';
	printf("%s %s\n",ptr, str1);
	
	char a[5];
	scanf("%s",a);
	printf("%s", a);
	scanf("%s",a);
	int i;
	for(i=0;i<5;i++)
	printf("%c", *(a+i));
}
