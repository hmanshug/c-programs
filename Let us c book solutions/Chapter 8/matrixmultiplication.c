#include <stdio.h>

int main() {
	int m1[3][3]= {
						1,2,3,
						4,5,6,
						7,8,9
					};
	int m2[3][3]= {
						1,2,3,
						4,5,6,
						7,8,9
					};
	int m3[3][3];
	int i, j, k;
	int sum=0;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			sum=0;
			for(k=0;k<3;k++) {
				sum=sum+ m1[i][k] * m2[k][j];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
}
