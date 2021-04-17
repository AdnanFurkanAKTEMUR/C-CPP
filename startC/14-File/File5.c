#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *dosya;

    if((dosya=fopen("file5.txt","r"))==NULL){
        printf("dosya bulunamadi...");
    }
	
	dosya=fopen("file5.txt","r");
	int numara[20];
	char isim[20][20];
	char soy[20][20];
	
	int i=0;
	while(!feof(dosya)){
		fscanf(dosya,"%s %s %d",&isim[i],&soy[i],&numara[i]);i++;
	}
	int a;
	for(a=0;a<i;a++){
		printf("%s %s %d \n",isim[a],soy[a],numara[a]);
	}


    //int fseek (FILE *fp, long 2, SEEK_SET);



    getch();
    return 0;
}
