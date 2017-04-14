#include <stdio.h>

int main(int a, char *av[]) {
	
	int i;
	printf("%d\n", a);
	for(i=0; i<a; i++)
	printf("%s\n",av[i]);
	
	char ch;
	
	while((ch=getc(stdin))!=EOF) {
		putch(ch, stdout);
	}
	
	return 0;
}
