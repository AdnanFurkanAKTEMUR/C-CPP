#include <stdio.h>
#include <stdlib.h>

void tasi(int *ptr[]){
	printf("fonksiyona girdim.\n");
	
	int i;
	for(i=0;i<9;i++){
		printf("%d\n",*ptr[i]);
	}
}

int main(){
	
	int dizi[]={1,2,3,4,5,6,7,8,9};
	int uzunluk=(sizeof(dizi)/sizeof(*dizi));
	int *diziPtr[uzunluk];

	
	int i;
	
	for(i=0;dizi[i] != '\0';i++){
		diziPtr[i]=&dizi[i];
	}
	tasi(diziPtr);
	getch();
	return 0;
}
