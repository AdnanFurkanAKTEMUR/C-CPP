#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void enBuyuk(int dizi[],int diziBoyutu){
	int enBuyukDeger=0;
	int i;
	for(i=0;i<diziBoyutu;i++){
		
		if(dizi[i]>enBuyukDeger){
			enBuyukDeger=dizi[i];
			printf(" %d ",enBuyukDeger);
		}
		
	}
	printf("\n");
	int enKucukDeger=dizi[0];
	
	
	for(i=0;i<diziBoyutu;i++){
			
		if(dizi[i]<enKucukDeger){
			enKucukDeger=dizi[i];
			printf(" %d ",enKucukDeger);
		}
		
	}
	printf("\n");
	 printf("en buyuk deger:%d\n",enBuyukDeger);
	 printf("en kucuk deger:%d",enKucukDeger);
		
	
}



int main(){
	srand(time(NULL)); 
	int dizi1[20];
	int boyut;
	boyut=(sizeof dizi1 / sizeof *dizi1);
	
	int i;
	for(i=0;i<boyut;i++){
		dizi1[i]=rand()%999;
		printf(" %d ",dizi1[i]);
	}
	printf("\n");

	
	enBuyuk(dizi1,boyut);
	getch();
	return 0;
}
