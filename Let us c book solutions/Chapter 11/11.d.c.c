#include <stdio.h>

float getfloat();

int  main() {
	float a;
	a= getfloat();
	printf("\nyou entered %f", a);
	return 0;
}

float getfloat() {
	char str1[10];
	char ch;
	int i; 
	float val=0;
	
	for(i=0; i<10; i++) {
		ch=getche();
		
		if(ch=='\r') {
			str1[i]='\0';
			break;
		}
		
		if(ch=='\b') {
			printf("\b");
			i--;
			
		}
		
		else {
			str1[i]=ch;
			
		}
		
	}
	
	for(i=0; i<strlen(str1); i++) {
		if(str1[i]=='.')
		break;
	}
	
	int ptr=i, k=1;
	for(i=ptr-1;i>-1; i--) {
		val= val+ (str1[i]-'0')*k;
		k=k*10;
	}
	float j=0.1;
	for(i=ptr+1;i<strlen(str1);i++) {
		val=val+(str1[i]-'0')*j;
		j=j/10;
	}
	printf("\n%f", val);    //minute ERROR?????
	return val;
	
}
