#include <stdio.h>
#include <string.h>


int main() {
	char str[64];
	gets(str);
	
	int length1=strlen(str);
	
	int pre, end;
	int i=0;
	int length= 64-length1;
	//printf("%d", length);
	
	if(length%2==0) {
		pre=length/2;
		end=length/2;
	} else {
		pre=(length/2)+1;
		end=length/2;
	}
	
	for(i=0; i<pre; i++) {
		printf("_");
	}
	printf("%s", str);
	//printf("%d", i);
	for(i=0; i<end; i++) {
		printf("_");
	}
	//printf("%d", i);
	return 0;
}
