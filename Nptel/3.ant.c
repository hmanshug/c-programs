#include <stdio.h>

int main() {
	int ant;
	scanf("%d", &ant);
	
	int dir[ant];
	int i;
	
	scanf("%d", &dir[0]);
	for(i=1; i<ant; i++) {
		scanf("%d", &dir[i]);
		
		if(dir[i-1]+dir[i]==0 && dir[i-1]==1) { 
			
			dir[i-1]= -1*dir[i-1];
			dir[i]= -1*dir[i];
		}
	}
	
	int m, n;
	int p, q;
	int flag=0;
	
	for(i=0; i<ant; i++) {
		if(dir[i]==-1) {
			m=i;
			p++;
		} else if(dir[i]==1 && flag==0){
			n=i;
			q++;
			flag=1;
		}
		
		if(dir[i]==1)
		q++;
	}
	if(p>q)
	printf("%d", m+1);
	else
	printf("%d", n+1);
	
	return 0;
}
