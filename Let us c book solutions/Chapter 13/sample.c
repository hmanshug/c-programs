#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE *f1, *f2;
	char ch[80];
	if(argc!= 3) {
		exit(1);
	}
	
	f1= fopen(argv[1],"rt");
	if(f1==NULL) {
		printf("File not exist....1");
		exit(0);
	}
	
	f2= fopen(argv[2],"a");
	if(f2==NULL) {
		printf("File not exist....2");
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
