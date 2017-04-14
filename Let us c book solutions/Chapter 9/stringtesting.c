#include <stdio.h>

int main() {
	
	char s[5]="nnn";
	int i;
	
	for(i=0; i<strlen(s);i++)
	printf("%c ", s[i]);
	
	printf("%d", strlen(s));
	
	
	
	return 0;
}
