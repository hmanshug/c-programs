#include <stdio.h>

int main() {
	char a[]="Discovery of India";
	char b[]="Jawaharlal Nehru";
	float c= 425.50;
	
	char a1[]="My Experiments with Truth";
	char b1[]="Mahatma Gandhi";
	float c1= 75.50;
	
	printf("%-30s %-25s %10.2f\n", a, b, c);
	printf("%-30s %-25s %10.2f", a1, b1, c1);
	
	return 0;
}
