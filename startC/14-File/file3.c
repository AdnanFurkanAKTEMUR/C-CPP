#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *dosya;

    if((dosya=fopen("file3.txt","r"))==NULL){
        dosya=fopen("file3.txt","w");
        //fprintf(dosya,"adnan furkan aktemur");
        char yaz[40];
        gets(yaz);
        fputs(yaz,dosya);
        fclose(dosya);
        printf("dosya olusturuldu...\n");
    }

    char oku[20];
    dosya=fopen("file3.txt","r");
    fgets(oku,22,dosya);
    puts(oku);
    fclose(dosya);



    return 0;
}