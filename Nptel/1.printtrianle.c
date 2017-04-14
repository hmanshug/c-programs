#include <stdio.h>

int main() {
	int n;
	int i, j;
	int z=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i) {
		for(j=1; j<=i; ++j) {
			printf("%d", z);
		}
		if(i!=n)printf("\n");
	}
}
