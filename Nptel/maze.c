#include<stdio.h>
int main(){
	int arr[51][51],t,n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	arr[0][0]=2;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]==1){
				if(i!=0){
					if(arr[i-1][j]==2)
						arr[i][j]=2;
				}
				if(j!=0){
					if(arr[i][j-1]==2){
						arr[i][j]=2;
					}
				}
			}
		}
	}
	if(arr[n-1][n-1]==2){
		printf("POSSIBLE\n");
	}
	else printf("NOT POSSIBLE\n");
}
