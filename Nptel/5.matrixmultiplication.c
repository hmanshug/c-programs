#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("%d", LONG_LONG_MAX);
	
	int test;
	scanf("%d", &test);
	
	while(test!=0) {
		
		int order;
		int power;
		scanf("%d%d", &order, &power);
		unsigned long long matrix[order][order], resultant[order][order];
		unsigned long long matres[order][order];
		int i, j, k;
		unsigned long long sum;
		
		for(i=0; i<order; i++) {
			
			for(j=0; j<order; j++) {
				
				scanf("%llu", &matrix[i][j]);
				resultant[i][j]= matrix[i][j];
			}
		}
		
		
		int z;
		
		for(z=0; z<power-1; z++) {
			
			for(i=0; i<order; i++) {
			for(j=0; j<order; j++) {
				sum=0;
				for(k=0; k<order; k++) {
					sum=sum+ matrix[i][k] * resultant[k][j];
				}
				matres[i][j]= sum;
				//printf("%d ", sum);
			}
			//printf("\n");
		}
		for(i=0; i<order; i++) {
			for(j=0; j<order; j++) {
				resultant[i][j]= matres[i][j];
			}
		}
		}
		
		for(i=0; i<order; i++) {
			for(j=0; j<order; j++) {
				printf("%llu ", resultant[i][j] % 1000000007);
			}
			printf("\n");
		}
		
		test--;
	}
	
	return 0;
}
