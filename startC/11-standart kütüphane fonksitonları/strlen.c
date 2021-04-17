#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
	
	char isim[21];
	printf("isim giriniz:");
	gets(isim);
	printf("%s\n",isim);
	printf("%d\n",strlen(isim));
	int boyut=strlen(isim);
	
	//tersten yazdýrma
	int i;
	for(i=boyut-1;i>=0;i--){
		printf("%c",isim[i]);
	}
	getch();
	return 0;
}
