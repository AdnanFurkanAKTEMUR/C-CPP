#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	char kelime[25];
	
	char *duzAdres,*tersAdres;
	printf("Lütfen kelimeyi giriniz:");
	gets(kelime);
	
	
	for(tersAdres=kelime;*tersAdres != NULL;tersAdres++);
	
	for(duzAdres=kelime,tersAdres--;tersAdres>=duzAdres;){
		if(*tersAdres == *duzAdres){
			tersAdres--;
			duzAdres++;
		}
		else{
			break;
		}
	}
	
	if(tersAdres<duzAdres){
		printf("polindrom\n");
	}
	else{
		printf("polindrom degildir\n");
	}
	getch();
	return 0;
}
