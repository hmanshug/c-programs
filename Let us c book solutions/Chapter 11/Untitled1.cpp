#include<stdio.h>
#include<stdlib.h>
int * fun();
int main()
{
	int  *j ;
	j=fun();
	printf("%d\n",*j);
	printf("%d\n",*j);
	
	int i, count;
	printf("%d %d\n", i, count);
	while(i=count++!=10)
	printf("%d %d\n", i, count);
	printf("%d %d\n", i, count);
	
	return 0 ;
}

int* fun()
{
	int k=35 ;
	return(&k);
	
}
