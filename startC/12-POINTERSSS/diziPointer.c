//dizilerde pointer

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	double sayilar[]={1.2,2.2,3.2,4.2,5.2,6.2,7.0};
	
	double *ptr;

	
	ptr=&sayilar;
	
	printf("%x \n",ptr);
	printf("%x \n",*ptr);
	printf("%x \n",&sayilar[3]);
	int i;
	for(i=0;i<7;i++){
		printf("%x adreste %lf degeri var.\n",ptr+i,sayilar[i]);
	}
	
	
	
}
