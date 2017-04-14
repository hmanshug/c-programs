#include <stdio.h>
#include <conio.h>
int main() {
	char ch;
	
	
	printf("Press any key to continue.");
	ch=getch();
	printf("\n1 %c",ch);
	
	printf("\nType any character");
	ch= getche();
	printf("\n2 %c",ch);
	
	printf("\nType any character");
	ch=getchar();
	printf("3 %c",ch);
	
	printf("\nContinue Y/N");
	ch=fgetchar();
	printf("\n1 %c",ch);
	
	
	return 0;
}

