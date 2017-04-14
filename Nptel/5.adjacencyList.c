#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	int edge[num][2];
	int i;
	
	for(i=0; i< num; i++) {
		scanf("%d%d", &edge[i][0], &edge[i][1]);
	}
	
	int key;
	scanf("%d", &key);
	
	for(i=0; i<num; i++) {
		if(edge[i][0] == key)
		printf("%d\n", edge[i][1]);
		else if(edge[i][1] == key)
		printf("%d\n", edge[i][0]);
	}
	
	
	
	return 0;
}
