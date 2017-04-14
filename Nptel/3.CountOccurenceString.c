#include <stdio.h>
#include <string.h>

int main() {
	char sc[8192];
	char pc[8192];
	int count=0;
	int flag=0;
	
//	char *s= (char *) malloc(100*sizeof(char));
//	char *p= (char *) malloc(100*sizeof(char));
	
	scanf("%s%s", sc, pc);
	char *s=sc;
	char *p=pc;
	
	while((*s) != '\0') {
		char *temp1=s;
		char *temp2=p;
		flag=0;
		
		while(*temp1==*temp2) {
			flag++;
			if(flag==strlen(p)) {
				count++;
				break;
			}
			
			temp1++;
			temp2++;
		}
		
		s++;
	}
	
	printf("%d", count);
	
	return 0;
}
