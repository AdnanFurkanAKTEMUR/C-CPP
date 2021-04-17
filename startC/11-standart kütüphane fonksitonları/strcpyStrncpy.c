#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char isim[]={"adnan furkan aktemur"};
	char ulke[20];
	char ulke2[12];
	strcpy(ulke,isim);
	strncpy(ulke2,isim,12);
	
	printf("ulke:%s\n",ulke);
	printf("ulke2:%s\n",ulke2);
	
	
	getch();
	return 0;
}
