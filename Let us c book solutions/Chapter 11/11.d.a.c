# include <stdio.h>

void xgets(char *);
void xputs(char *);

int main() {
	char name[100];
	xgets(name);
	xputs(name);
	return 0;
}
/*

void xgets(char *ch) {
	//scanf("%s", ch);
	char c;
	do {
		c=getche();
		*ch=c;
		ch++;
	} while(c!= '\r') ;
}

void xputs(char *ch) {
	printf("\n");
	printf("%s", ch);
}

*/

// I THINK IN CONSOLE WHEN WE PRESS ENTER \n IS CHANGED TO \r

void xputs(char *s) {
	printf("\n");
	while(*s) {
		putch(*s);
		s++;
	}
	//printf("%s", s);
}

void xgets (char *s) {
	int i;
	char ch;
	
	for(i=0; i<=98; i++) {
		
		ch= getche();
		
		if(ch=='\r') {
			*s= '\0';   
			break;
		}
		if(ch=='\b') {
			printf("\b");
			i--;
			s--;
		}
		else {
			*s= ch;
			s++;
		}
	}
}

