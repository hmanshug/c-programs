# include <stdio.h>

void DecToBinary(int );
void DecToBinary_Rec(int );

int main() {
	int n;
	scanf("%d", &n);
	DecToBinary(n);
	printf("\n");
	DecToBinary_Rec(n);
	
	return 0;
}

void DecToBinary(int a) {
	
	while(a!=0) {
		printf("%d", a%2);
		a=a/2;
	}
	
}

void DecToBinary_Rec(int a) {
	if(a==0) 
		return;
	printf("%d", a%2);
	DecToBinary_Rec(a/2);
}
