#include <stdio.h>

int main() {
	
	int start=1;
	int end=7;
	int i;
	
	char a[20]="Ram ia	goodmaji ji l";
	
	for(i=start; i<=end; i++) {
		printf("%c", *(a+i));
	}
}
