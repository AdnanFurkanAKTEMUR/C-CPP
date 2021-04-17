//InsertionSort

#include <stdio.h>
#include <stdlib.h>

int boyut;
void InsertionSort(int dizi[],int boyut){
    int eleman;
    int oncesi;
    int i;
    for(i=1;i<boyut;i++){
        eleman=dizi[i];
        oncesi=i-1;
        while(oncesi>=0 && dizi[oncesi]>eleman){
            dizi[oncesi+1]=dizi[oncesi];
            oncesi--;
        }
        dizi[oncesi+1]=eleman;
    }
    
}
int *diziOlustur(){
	printf("Dizi boyutunu giriniz:");scanf("%d",&boyut);
    int *dizi=malloc(sizeof(int)*(boyut+1));
    int i;
    for(i=0;i<boyut;i++){
    	printf("%d . elemani giriniz:",i+1);
   		scanf("%d",&dizi[i]);
   }
	printf("Girilen dizi: ");
	for(i=0;i<boyut;i++){
    	printf("%d ",dizi[i]);
   		
   }
	
    return dizi;
}
void diziYazdir(int *gelenDizi,int boyut){
	printf("\nInsertionSort: ");
	int i;
	for(i=0;i<boyut;i++){
		printf("%d ",*(gelenDizi+i));
	}
}
int main(){

    int *dizi;
    
    dizi=diziOlustur();
    
    InsertionSort(dizi,boyut);
    
    diziYazdir(dizi,boyut);
  /*  int i;
    for(i=0;i<boyut;i++){
    	printf("%d ",*dizi+i);
	}*/

   getch();
    return 0;
}
