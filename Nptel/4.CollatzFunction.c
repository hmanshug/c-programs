#include <stdio.h>

int main() {
	int sn, count;
	scanf("%d", &sn);
	
	while(sn!=1) {
		if(sn%2==0)
		sn=sn/2;
		else
		sn= 3*sn+1;
		
		count++;
	}
	printf("%d", count);
	
	return 0;
}
