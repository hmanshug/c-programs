#include <stdio.h>
#include <windows.h>

void drawbox(int, int, int, int);
void gotoxy(short int col, short int row);

int main() {
	// main(int argc, char *argv[])
	FILE *fp;
	char ch;
	int pg=1, r=2, c=1;
	/*
	if(argc!=2) {
		puts("Incorrect Usage...");
		exit(1);
	}
	*/
	fp= fopen("temp.txt", "r");
	if(fp==NULL) {
		puts("Cannot open source file...");
		exit(2);
	}
	
	drawbox(1,0,22,79);
	gotoxy(0,0);
	printf("FileName: %s","temp.txt");
	gotoxy(65,0);
	printf("Page:- %d",pg);
	
	while((ch=getc(fp))!= EOF)
	{
		if(ch!='\n') {
			gotoxy(c, r);
			printf("%c",ch);
			c++;
		}
		else {
			r++;
			c=1;
			if(r>20) {
				pg++;
				r=2;
				gotoxy(0,23);
				puts("Press any key...");
				getche();
				system("cls");
				drawbox(1, 0, 22, 79);
				gotoxy(0,0);
				printf("Filename: %s", "temp.txt");
				gotoxy(65,0);
				printf("Page: %d", pg);
			}
		}
	}
	fclose(fp);
	return 0;
}

void drawbox(int a, int b, int i, int j) {
	
	int x, k;
	
	gotoxy(b, a);
	printf("%c",201);
	gotoxy(b,i);
	printf("%c",200);
	gotoxy(j,i);
	printf("%c",188);
	gotoxy(j,a);
	printf("%c",187);
	
	for(x=a+1; x<=i-1; x++) {
		gotoxy(b, x);
		printf("%c", 186);
		gotoxy(j, x);
		printf("%c",186);
	}
	
	for(k=b+1; k<=j-1; k++) {
		gotoxy(k,a);
		printf("%c", 205);
		gotoxy(k,i);
		printf("%c",205);
	}
}

void gotoxy(short int col, short int row) {
	HANDLE hStdout= GetStdHandle (STD_OUTPUT_HANDLE);
	COORD position= {col, row};
	SetConsoleCursorPosition(hStdout, position);
}


