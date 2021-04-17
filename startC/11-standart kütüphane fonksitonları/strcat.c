#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	char isim[20];
	char meslek[20];
	
	printf("isim meslek:");
	scanf("%s %s",isim,meslek);
	
	char kullanici[40];
	strcat(kullanici,isim);
	strcat(kullanici," ");
	strcat(kullanici,meslek);
	printf("isim:%s\n",isim);
	printf("meslek:%s\n",meslek);
	printf("kullanici:%s\n",kullanici);
	printf("**************************************\n");
	
	char adnan[20];
	char meslekGir[20];
	char girilmis[25]={"ismi:"};
	char girilmism[25]={"meslek:"};
	char kullanici2[50];
	printf("isimgir:");
	getchar();
	gets(adnan);
	printf("meslekgir:");
	gets(meslekGir);
	
	strcat(girilmis,adnan);
	strcat(girilmism,meslekGir);
	strcat(kullanici2,girilmis);
	strcat(kullanici2," ");
	strcat(kullanici2,girilmism);
	
	printf("isimGir:%s\n",adnan);
	printf("meslekGir:%s\n",meslekGir);
	printf("girilmis:%s\n",girilmis);
	printf("girilmism:%s\n",girilmism);
	printf("kullanici2:%s\n",kullanici2);
	
	getch();
	
	return 0;
}
