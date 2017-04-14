#include <stdio.h>
#include <conio.h>

void clrscr();

int main() {
	FILE *fr;
	char filename[20]= "temp.txt";
	
	fr=fopen(filename, "rc");
	if(fr== NULL) {
		printf("ERROR IN OPENING THE FILE");
		exit(0);
	}
	
	int pageno=1;
	char str[80];
	char *p;
	int count=1;

		printf("File Name: %s\t",filename);
		printf("Page No. %d\n", pageno);
		while(1) {
			p=fgets(str, 79, fr);
			
			if(p==NULL)
			break;
			else
			puts(str);
			
			count++;
			if(count==10){
				puts("Press any key to read next page...");
				getche();
				pageno++;
				clrscr();
				printf("File Name: %s\t",filename);
				printf("Page No. %d\n", pageno);
				count=1;
				
			}
		
			
		}
	fclose(fr);
	return 0;
}

void clrscr() {
	int i;
	for(i=0; i<50;i++) {
		printf("\n");
	}
}
