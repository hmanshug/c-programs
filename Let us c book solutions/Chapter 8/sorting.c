#include <stdio.h>

int main() {
	int i, j;
	int n= 10;
	int sample[]= {2,6,1,9,3,10,4,9,0,20};
	int temp;
	
	// SELECTION SORT
	/*
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(sample[i]>sample[j]) {
				temp=sample[i];
				sample[i]=sample[j];
				sample[j]=temp;
			}
			
		}
	}
	*/
	// BUBBLE SORT
	/*
	for(i=n; i>0; i--) {
		for(j=0; j<i; j++) {
			if(sample[j]>sample[j+1]) {
				temp=sample[j];
				sample[j]=sample[j+1];
				sample[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	printf("%d ", sample[i]);
	*/
	
	// INSERTION SORT
	
	for(i=1; i<n; i++) {
		for(j=i; j>0; j--) {
			if(sample[j]<sample[j-1]) {
				temp=sample[j-1];
				sample[j-1]=sample[j];
				sample[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	printf("%d ", sample[i]);
}
