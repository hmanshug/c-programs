#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int str2int(char *, int *);
int ncr(int , int );
int fac(int );

int main() {
	
	int prow, test;
	scanf("%d%d", &prow, &test);
	int i=0;
	
	char *s;
	int size, j;
	int data[10];
	int sum;
	int flag;
	
	fflush(stdin);
	s= (char *)malloc(1000*sizeof(char));
	
	gets(s);
	
	while(i < test) {
		//printf("dd");
		//fflush(stdin);
		gets(s);
		
		size= str2int(s, data);
		
		sum=0;
		flag=0;
		if(data[0]>prow) {
			printf("-1 ");
			flag=1;
		} else {
		
			for(j=1; j<size; j++) {
				
				if(data[j]>data[0]) {
					printf("-1 ");
					flag=1;
					break;
				} else {
					sum=sum+ncr(data[0], data[j]);
				}
			}
		}
		
		if(flag==0)
		printf("%d ", sum);
		/*
		for( j=0; j<size; j++)
		printf("%d ", data[j]);
		*/
		
		//printf("\n");
		i++;
	}
	
	
}

int ncr(int n, int r) {
	
	int res=0;
	res=fac(n)/(fac(n-r)*fac(r));
	return res;
}

int fac(int n) {
	
	if(n==1 || n==0)
	return 1;
	else
	return n*fac(n-1);
}

int str2int(char *s, int *data) {
		int i=0, j=0, k=0;
		int intcount=0;
		int sum=0;
		int dcount=0;
		
		while(1) {
			
			if(s[i]==' ' && s[i+1]=='\0')
			intcount--;
			
			
			if(s[i]== ' ' || s[i]== '\0') {
				intcount++;
				k=0;
				sum =0;
				for(j=i-1; j>=i-dcount; j--) {
					sum=sum+ pow(10, k)*(s[j]-48);
					k++;
				}
				*(data+intcount-1)=sum;
				dcount=0;
			} else { 
				 dcount++;
			} 
			
			
			if(s[i] == '\0')
				break;
			i++;
		}
		
		return intcount;
	}
