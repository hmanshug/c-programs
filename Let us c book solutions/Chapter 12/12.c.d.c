#include <stdio.h>

int main() {
	FILE *fr;
	FILE *fw;
	
	fr= fopen("testfile.txt", "rc");
	if(fr==NULL) {
		printf("ERROR IN OPENING THE FILE...");
		exit(0);
	}
	
	fw= fopen("demofile.txt", "wc");
	if(fw==NULL) {
		printf("ERROR IN OPENING THE FILE...");
		fclose(fr);
		exit(1);
	}
	
	while(1) {
		char ch=fgetc(fr);
		
		if(ch==EOF)
		break;
		
		if(ch>96 && ch<123) {
			fputc(ch-32, fw);
		}
		else {
			fputc(ch, fw);
		}
		
		
	}
	
	return 0;
}
