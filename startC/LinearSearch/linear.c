#include <stdio.h>
#include <stdlib.h>

int linearSearch(int dizi[],int arananSayi,int boyut){
    int i;
    for(i=0;i<boyut;i++){
        if(dizi[i]==arananSayi){
            return i;
        }
    }
    return -1;
}
void diziAl(int dizi[]){
    printf("diziyi giriniz");
    for(int i=0;i<5;i++){
        printf("%d. eleman",i+1);
        scanf("%d",&dizi[i]);
    }
}
void diziYazdir(int dizi[]){
     for(int i=0;i<5;i++){
        printf("%d. eleman: %d\n",i+1,dizi[i]);
        
    }
}
int main(){

    int dizi[6];
    int max;
    int arananSayi;
    printf("aranan ayı:");
    scanf("%d",&arananSayi);
    diziAl(dizi);
    max=linearSearch(dizi,arananSayi,5);
    printf("aradiginiz sayi %d sirada",max);
   


    return 0;
}