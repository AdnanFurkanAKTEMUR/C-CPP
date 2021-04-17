#include <stdlib.h>
#include <stdio.h>


int main(){

    /*FILE *dosya;
    char karakter;

    
    if((dosya=fopen("file2.txt","r"))==NULL){
        dosya=fopen("file2.txt","w");// create file
        fprintf(dosya,"adnan furkan aktemur");
        fclose(dosya);
        printf("Dosya olusturuldu\n");
    }
   dosya=fopen("file2.txt","r");
 //  karakter=fgetc(dosya);
   while(karakter!=EOF){

       karakter=fgetc(dosya);
       printf("%c\n",karakter);
       
   }
   fclose(dosya);
   */
   const char *karakter="3";
   int a;
   a=atoi(karakter);
   printf("%d",a);
	getch();
    return 0;
}
