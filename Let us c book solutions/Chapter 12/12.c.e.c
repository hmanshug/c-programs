#include <stdio.h>
#include <string.h>


int main() {
	
	FILE *fr1;
	FILE *fr2;
	FILE *fw;
	char str[80];
	
	fr1= fopen("testfile.txt", "rc");
	if(fr1==NULL) {
		printf("ERROR IN OPENING THE FILE...");
		exit(0);
	}
	
	fr2= fopen("temp.txt", "rc");
	if(fr2==NULL) {
		printf("ERROR IN OPENING THE FILE...");
		fclose(fr1);
		exit(1);
	}
	
	fw= fopen("demofile.txt", "wc");
	if(fw==NULL) {
		printf("ERROR IN OPENING THE FILE...");
		fclose(fr1);
		fclose(fr2);
		exit(2);
	}
	
	int flag=0, flag2=0;
	char *ptrch;
	char newl='\n';
	while(1) {
		
		if(fgets(str, 79, fr1)!= NULL && flag==0) {
			ptrch=strchr(str, newl);
			fputs(str, fw);
			if(!ptrch)
			fputs("\n", fw);
		} else{
			flag=1;
		}
		
		if(fgets(str, 79, fr2)!= NULL && flag2==0) {
			ptrch=strchr(str, newl);
			fputs(str, fw);
			if(!ptrch)
			fputs("\n", fw);
		} else {
			flag2=1;
		}
		
		if(flag==1 && flag2==1)
		break;
	}
	
	fclose(fr1);
	fclose(fr2);
	fclose(fw);
	return 0;
}

// strchr returns the pointer of matched character in the string
// if newline is not present in string then it will print a new line
// as we done in our program.
// if a line has 78 characters then \r\n are the others so in 79 space 
// our string cant contain the \n character so a blank line is produced
// (in next turn the only \n is selected in the string)
