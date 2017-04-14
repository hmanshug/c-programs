#include <stdio.h>
#include <math.h>
void function(int [], int *, float *, float *);


int main() {
	printf("Enter five numbers");
	int a[5],sum;
	float avg, dev;
	
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	function(a, &sum, &avg, &dev);
	printf("%d %f %f", sum, avg, dev);
	return 0;
}

void function(int a[], int *sum, float *avg, float *dev) {
	*sum= a[0]+a[1]+a[2]+a[3]+a[4];
	*avg= (float) (a[0]+a[1]+a[2]+a[3]+a[4])/5;
	int i;
	for(i=0; i<5; i++) {
		*dev=*dev + pow ((a[i]- (*avg)), 2);
	}
	*dev= sqrt(*dev/5);
}
