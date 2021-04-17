#include <stdlib.h>
#include <stdio.h>

void yildizBas(int *sayi){
	
	int i;
	for(i=0;i<(*sayi);i++){
		printf("*\n");
	}
	
}
void topla(float *sayi1,float *sayi2){
	printf("%f\n",(*sayi1)+(*sayi2));
}

int main(){
	
	int sayi1,sayi2=5;
	int *sayi1adres, *sayi2adres;
	
	sayi2adres=&sayi2;
	
	sayi1adres=sayi2adres;
	printf("%x %x\n",sayi1adres,sayi2adres);
	
	sayi1=(*sayi2adres)++;	
	printf("sayi1:%d\nsayi2:%d\n",sayi1,sayi2);
	
	
	sayi1=++(*sayi2adres);
	
	printf("sayi1:%d\nsayi2:%d\n",sayi1,sayi2);
	
	printf("kac adet yildiz:");
	int yildizSayisi;
	scanf("%d",&yildizSayisi);
	
	yildizBas(&yildizSayisi);
	printf("sayilari topla\n");
	float topla1,topla2;
	scanf("%f %f",&topla1,&topla2);
	topla(&topla1,&topla2);
	
	getch();
	return 0;
}
