#include <stdio.h>
#include <string.h>

int main() {
	
	int sn;
	char word[20];
	scanf("%d%s", &sn, word);
	
	int i,j;
	int count=0;
	int length=strlen(word);
	int oddcount=0;
	
	for(i=0, j=length-1; i<sn/2; i++, j--) {
		if(!(word[i]==word[j]))
		break;
	}
	
	if(i==sn/2) {
		printf("%d", count);
	}
	else {
		
		
		for(i=0; i<length; i++) {
			//printf("\ni=%d\n", i);
			oddcount=0;
			if(word[i]=='\0') {
				//printf("Continue");
				continue;
			}
			
			else {
				for(j=i+1; j<length; j++) {
					if(word[i]==word[j]) {
						oddcount++;
						word[j]='\0';
					}
					
				}
			}
			//printf("%d\n", oddcount);
			if(!((oddcount+1)%2==0))
			count++;
			//printf("count=%d\n", count);
		}
		
		printf("%d", count);
	}
	
	return 0;
}
