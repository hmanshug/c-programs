#include <stdio.h>
#include <string.h>

int main() {
	int nos;
	scanf("%d", &nos);
	
	struct student {
		char name[128];
		float pmarks;
		float cmarks;
		float mmarks;
	};
	
	struct student sdata[nos]; 
	int i, j;
	
	for(i=0; i<nos; i++) {
		scanf("%s%f%f%f", sdata[i].name, &sdata[i].pmarks, &sdata[i].cmarks, &sdata[i].mmarks);
	}
	
	struct student stemp;
	
	for(i=0; i<nos-1;i++) {
		for(j=i+1;j< nos;j++) {
			if(!((sdata[i].pmarks < sdata[j].pmarks) || 
			((sdata[i].pmarks == sdata[j].pmarks) && sdata[i].cmarks < sdata[j].cmarks) || 
			((sdata[i].pmarks == sdata[j].pmarks) && sdata[i].cmarks == sdata[j].cmarks && sdata[i].mmarks < sdata[j].mmarks) ||
			((sdata[i].pmarks == sdata[j].pmarks) && sdata[i].cmarks == sdata[j].cmarks) && sdata[i].mmarks == sdata[j].mmarks && strcmp(sdata[i].name, sdata[j].name) < 0)) {
				strcpy(stemp.name, sdata[i].name);
				stemp.pmarks= sdata[i].pmarks;
				stemp.cmarks= sdata[i].cmarks;
				stemp.mmarks= sdata[i].mmarks;
				
				strcpy(sdata[i].name, sdata[j].name);
				sdata[i].pmarks= sdata[j].pmarks;
				sdata[i].cmarks= sdata[j].cmarks;
				sdata[i].mmarks= sdata[j].mmarks;
				
				strcpy(sdata[j].name, stemp.name);
				sdata[j].pmarks= stemp.pmarks;
				sdata[j].mmarks= stemp.mmarks;
				sdata[j].cmarks= stemp.cmarks;
				
			}			
			}
	}
	
	
	for(i=0; i<nos; i++) {
		printf("%s %.2f %.2f %.2f\n", sdata[i].name, sdata[i].pmarks, sdata[i].cmarks, sdata[i].mmarks);
	}
	
	return 0;
}
