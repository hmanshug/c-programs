#include <stdio.h>

int main() {
	int num, i=0;
	int al, as, temp;
	
	 while (1) {
		scanf("%d", &num);
		if(num==-1)
		break;
		
		if(i==0) {
			al=num;
		} else if(i==1){
			as=num;
			if(as>al) {
				temp=as;
				as=al;
				al=temp;
			}
			
		} else {	
			if(num>al) {
				as=al;
				al=num;
			}
			else if(num<al && num>as) {
				as=num;
			}
		}
		
		i++;
		
	}
	printf("%d", as);
	
	return 0;
}
