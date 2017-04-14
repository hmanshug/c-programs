#include<stdio.h>
int main()
{
	int v,i=0,index=0;
	
	scanf("%d",&v);
	int n[v];
	
	
	for( i=0;i<v;i++)
	scanf("%d",&n[i]);
	
	int big=n[0];
	for(i=0;i<v-1;i++)
	{
		if(n[i]>big)
		{
		big=n[i];
		 index=i;
	}
	}
	int sb=n[0];
	for(int i=0;i<v-1;i++)
	{
		if(sb<n[i]&& index !=i)
		sb=n[i];
		
	}
	printf("%d",sb);
}
