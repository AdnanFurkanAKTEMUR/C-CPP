#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	FILE *dosyaninAdresi;
	
	dosyaninAdresi=fopen("Example File.txt","a");//append ekleme modu �ncekini silmeden ekler
	//dosyaninAdresi=fopen("Example File.txt","w");->�nceki yaz�lanlar� siler
	printf("isminizi giriniz:");
	char isim[20];
	gets(isim);	

	fprintf(dosyaninAdresi,"%s\n",isim);
	
	printf("isminiz basari ile kayit edildi...");
	
	fclose(dosyaninAdresi);	
	
	getch();
	return 0;
}
