#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	printf(" 2 sayi aras�nda ki say�lar� topla. alt ve �st de�erler dahil.\n");
	printf("kucuk sayiyi giriniz:");
	int sayi1;
	scanf("%d",&sayi1);
	printf("buyuk sayiyi giriniz:");
	int sayi2;
	scanf("%d",&sayi2);
	
	int toplam=0;
	int i;
	for(i=sayi1;i<=sayi2;i++){
		toplam=toplam+i;
	}
	
	printf("sonu�:%d",toplam);
	getch();
	
	return 0;
}
