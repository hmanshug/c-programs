#include <stdio.h>

int main() {
	char order;
	scanf("%d", &order);
	int num;
	int i=1;
	char fflag=0, iflag=0, jflag=0;
	char o=order-1;
	char i1=1, i2=0;
	char div;
	
	while(order!=0) {
		if(i>order*order) {
			break;
		}
		div=i%order;
		if(div==0) {
			div=order;
		}
		
		scanf("%d", &num);
		
		 
			if((div> i1 && div<=order && !num==0)) {
				iflag=1;
			}
			if((div>=1 && div<=i2 && !num==0)) {
				jflag=1;
			}
			
		if(div==order) {
		i2++;
		i1++;
		
		}

		i++;
	}
	
	if(iflag==1 && jflag==1)
	printf("no\n");
	else
	printf("yes\n");
}
