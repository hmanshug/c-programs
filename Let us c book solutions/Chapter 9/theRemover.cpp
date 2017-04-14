#include <stdio.h>
#include <string.h>

int main() {
	char sample[]="The car is the best oh oh oh the teh...";
	// First i am using the pointer concept *sample but in this way value is not changing by assigning...
	printf("%s\n", sample);
	
	int length= strlen(sample);
	int i, flag1, j, k;
	
	for(i=0; i<length; i++) {
		if(*(sample+i)=='t' && *(sample+i+1)=='h' && *(sample+i+2)=='e') {
			for(j= 4, k=0; i+j<= length; j++, k++) {
				*(sample+i+k)= *(sample+i+j);
			}
			*(sample+length-1)=NULL;
			*(sample+length-2)=NULL;
			*(sample+length-3)=NULL;
			*(sample+length-4)=NULL;
			
		}
	}
	
	printf("%s\n", sample);
	return 0;
}
