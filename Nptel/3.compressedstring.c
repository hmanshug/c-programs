#include <stdio.h>
#include <string.h>

int main() {
	char iword[100];
	
	int number;
	scanf("%d", &number);
	scanf("%s", iword);
	
	int i;
	int j;
	
	int n;
	char word[100];
	char new1[100];
	char *final;
	
	for(i=0; i<number-1; i++) {
		
		scanf("%d", &n);
		
		scanf("%s", word);
		
		
		for(j=0; j<n; j++) {
			new1[j]=iword[j];
		}
		new1[j]='\0';
		
		strcat(new1, word);
		strcpy(iword, new1);
		//printf("%s", new1);
	}
	
	printf("%s", new1);
	
	return 0;
}
