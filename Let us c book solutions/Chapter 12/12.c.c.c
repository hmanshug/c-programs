#include <stdio.h>
#include "string.h"

// Solve the error in problem....

int main() {
	
	struct student {
		char name[20];
		int age;
	};
	
	struct student e;
	struct student e1, e11;
	long int recsize=sizeof(e);
	
	char another='y';
	
	FILE *fw;
	fw=fopen("recordfile.dat", "wb+");
	
	while(another=='y') {
		printf("Enter Name and Age");
		scanf("%s%d", e.name, &e.age);
		fprintf(fw,"%s %d", e.name, e.age);\
		printf("Prees y to insert more records...");
		fflush(stdin);
		another= getche();
		if(another!='y')
		break;
		
	}
	
	printf("Record size: %d",recsize);
	//printf("%d",fw);
	fseek(fw, 0, SEEK_SET);  // DOUBT..........
	//printf("%d",fw);
	
	int co=0, count;
	

	
	while(1) {
		
		count=1;
		
		fread(fw, "%s%d", e.name, &e.age);
		while(fscanf(fw, "%s%d", e1.name, &e1.age)!= EOF){
			printf("\n..................Name: %s\nAge: %d\n", e1.name, e1.age);
			count++;
			
			
			if('e.name[0]'>'e1.name[0]') {
				fseek(fw,-count*recsize,SEEK_CUR);
				fprintf(fw, "%s %d", e1.name, e1.age);
				fseek(fw,(count-2)*recsize,SEEK_CUR);
				fprintf(fw, "%s %d", e.name, e.age);
				
			
			}
		}
		long int nn=recsize*co;
		rewind(fw);
		fseek(fw,nn,SEEK_CUR);
		co++;
		if(fscanf(fw, "%s%d", e.name, &e.age)!= EOF) {
			printf("Name: %s\nAge: %d\n", e.name, e.age);
		}
		else
		break;
	}
	
	fclose(fw);
	return 0;
}
