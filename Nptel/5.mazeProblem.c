#include <stdio.h>

int main() {
	
	int order;
	scanf("%d", &order);
	
	int i, j;
	int graph[order][order];
	
	for(i=0; i<order; i++) {
		for(j=0; j<order; j++) {
			scanf("%d", &graph[i][j]);
		}
	}
	
	
	typedef struct point {
		int x;
		int y;
	} point;
	
	point start, end;
	start.x=0;
	start.y=0;
	end.x=order-1;
	end.y=order-1;
	
	while(true) {
		
	}
	
	
	
	return 0;
}
