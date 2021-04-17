//SelectionSort

#include <stdio.h>
#include <stdlib.h>

int boyut;
void SelectionSort(int dizi[],int boyut){
    int index;
    int i,j;
    for(i=0;i<boyut;i++){
        index=i;
        for(j=i;j<boyut;j++){
            if(dizi[j]<dizi[index]){
                index=j;
            }
        }
        int temp=dizi[i];
        dizi[i]=dizi[index];
        dizi[index]=temp;    
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
	printf("\nSelection Sort: ");
	int i;
	for(i=0;i<boyut;i++){
		printf("%d ",*(gelenDizi+i));
	}
}
int main(){

    int *dizi;
    
    dizi=diziOlustur();
    
    SelectionSort(dizi,boyut);
    
    diziYazdir(dizi,boyut);
  /*  int i;
    for(i=0;i<boyut;i++){
    	printf("%d ",*dizi+i);
	}*/

   getch();
    return 0;
}
