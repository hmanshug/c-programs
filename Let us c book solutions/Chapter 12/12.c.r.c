#include <stdio.h>

int main() {
	
	FILE *f;
	char ch;
	char word[100];
	short int i=0, j;
	
	f= fopen("testfile.txt", "rc");
	if(fopen==NULL) {
		printf("ERROR....FILE NOT FOUND!!!");
		exit(1);
	}
	
	while(1) {
		ch= fgetc(f);
		if(ch==EOF)
		break;
		
		
		
		if(ch==' ' || ch=='.' || ch=='\n') {
			for(j=i-1; j>=0; j--) {
				printf("%c", word[j]);
			}
			printf("%c",ch);
			i=0;
		}

		else {
			word[i]= ch;
			++i;
		}
	
	}
	return 0;
}
