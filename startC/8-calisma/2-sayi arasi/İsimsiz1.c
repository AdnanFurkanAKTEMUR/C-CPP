#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	printf(" 2 sayi arasýnda ki sayýlarý topla. alt ve üst deðerler dahil.\n");
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
	
	printf("sonuç:%d",toplam);
	getch();
	
	return 0;
}
