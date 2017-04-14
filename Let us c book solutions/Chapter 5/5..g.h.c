#include <stdio.h>
#include <math.h>

float sinexp(float x, int i, int j);
float fac(int n);

int main() {
	float angle;
	printf("Enter the angle in radian form: ");
	scanf("%f", &angle);
	printf("sinexp(%f) = %.5f", angle, sinexp(angle, 0, 2));
	return 0;
}

float sinexp(float x, int i, int j){
	printf("hrllo");
	i= 2*i+1;
	if(j==4)
	return 0.0;
	
	else
	return (float) ( pow(-1, j) *  pow(x, i)/(float)fac(i) )+  sinexp(x, i, ++j);
	
}

float fac(int n) {
	if(n==1)
	return 1;
	else
	return (float) n*fac(n-1);
}
