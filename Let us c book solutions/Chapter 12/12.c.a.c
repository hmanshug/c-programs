#include <stdio.h>

int main() {
	int count=1;
	FILE *fa;
	char ch;
	fa=fopen("testfile.txt","r");
	if(fa==NULL) {
		puts("File not exist.");
		exit(0);
	}
	
	while(1) {
		ch= fgetc(fa);
		
		if(ch== EOF)
		break;
		if(ch== '\n') {
			printf("\nLine number is %d\n", count);
			count++;
		}
		
		printf("%c",ch);
	}
	
	fclose(fa);
	return 0;
}
