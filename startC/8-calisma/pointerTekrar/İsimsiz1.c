#include <stdlib.h>
#include <stdio.h>
int boyut;


int *diziOlustur();
void diziYazdir(int *gelenDizi,int boyut);



int main(){
	
	int *ptr; 
	ptr=diziOlustur();
	diziYazdir(ptr,boyut);
	

	
	return 0;
}


int *diziOlustur(){
	printf("sinir ne kadar olsun:");
	scanf("%d",&boyut);
	
	int *dizi=malloc(sizeof(int)*(boyut+1));
	
	int i;
	for(i=0;i<boyut;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	return dizi;
}
void diziYazdir(int *gelenDizi,int boyut){

			int i;
	for(i=0;i<boyut;i++){
		printf("%d\n",*(gelenDizi+i));
	}
}
