#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *dosya;

    if((dosya=fopen("file4.txt","r"))==NULL){

        printf("dosyanin icine ne yazmak istersin:");
        char yaz[20];gets(yaz);
        dosya=fopen("file4.txt","w");
        fputs(yaz,dosya);
        fclose(dosya);
    }

    dosya=fopen("file4.txt","r");
    char kelimeler[20][20];
    int i=0;
    while(!feof(dosya)){
        fscanf(dosya,"%s",&kelimeler[i]);
        printf("%s\n",kelimeler[i]);
        i++;
    }

    fclose(dosya);









return 0;
}
