# include <stdio.h>

int rec_sum(int );

int main() {
	printf("Sum= %d", rec_sum(1));
	return 0;
}

int rec_sum(int a) {
	printf("Hello \n");
	
	if(a==2)
	return 2;
	else
	return (++a)+rec_sum(++a+1);
	
}

