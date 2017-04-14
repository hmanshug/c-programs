#include <stdio.h>

int main() {
	
	FILE *f1, *f2;
	char ch[80];
	
	f1= fopen("testfile.txt","rt");
	if(f1==NULL) {
		printf("File not exist.");
		exit(0);
	}
	
	f2= fopen("demofile.txt","a");
	if(f1==NULL) {
		printf("File not exist.");
		exit(1);
	}
	
	int count;
	while(fgets(ch, 80, f1)!= NULL) {
		fputs(ch, f2);
		count++;
	}
	printf("%d",count);
	
	
	fclose(f1);
	fclose(f2);
	//remove("demofile.txt");
	return 0;	
	
}
