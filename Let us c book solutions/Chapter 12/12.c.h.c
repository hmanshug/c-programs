/*  Problem 12.c.i
	Book Yashvant Kanetkar
*/


#include <stdio.h>

int main() {
	
	struct customer {
		int accno;
		char name[30];
		float balance;
	};
	
	struct trans {
		int accno;
		char trans_type;
		float amount;
	};
	
	struct customer cust1;
	struct trans trans1;
	
	int recsize1= sizeof(cust1);
	int recsize2= sizeof(trans1);
	
	FILE *custfile, *transfile;
	
	custfile= fopen("customer.dat", "rb+");
	if(custfile== NULL) {
		exit(1);
	}
	
	transfile= fopen("transactions.dat", "rb");
	if(transfile== NULL) {
		exit(2);
	}
	//printing hello is used for error checking but i didn,t found...
	//In while loop code in comment is the solution according to me
	
		while(fread(&trans1, recsize2, 1, transfile)==1) {
		/*
		rewind(custfile);
		printf("hello");
		
		while(fread(&cust1, recsize1, 1, custfile)==1) {
			printf("hello");
			if(trans1.accno==cust1.accno) {
				if(trans1.trans_type=='d') {
					cust1.balance= cust1.balance + trans1.amount;
				} else {
					if(cust1.balance - trans1.amount > 100)
					cust1.balance= cust1.balance - trans1.amount;
				}
				printf("Updated vale of Account: %d", cust1.accno);
				fseek(custfile, -recssize1, SEEK_CUR);
				fwrite(&cust1, recsize1, 1, custfile);
				break;
			}
		}*/
		//Following 2 line are used for testing, not necessary
		printf("hello");
		printf("%d\t %c\t %f\n",trans1.accno,trans1.trans_type, trans1.amount);
		
	}
	
	fclose(custfile);
	fclose(transfile);
	
}
