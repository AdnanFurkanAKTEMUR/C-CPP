//bubbleSort

#include <stdio.h>
#include <stdlib.h>

int boyut;
void BubbleSort(int dizi[],int boyut){
    int i,j;
    for(i=0;i<boyut;i++){
        for(j=1;j<boyut-i;j++){
            if(dizi[j-1]>dizi[j]){
                int temp=dizi[j-1];
                dizi[j-1]=dizi[j];
                dizi[j]=temp;
            }
        }
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
	printf("\nBubble Sort: ");
	int i;
	for(i=0;i<boyut;i++){
		printf("%d ",*(gelenDizi+i));
	}
}
int main(){

    int *dizi;
    
    dizi=diziOlustur();
    
    BubbleSort(dizi,boyut);
    
    diziYazdir(dizi,boyut);
  /*  int i;
    for(i=0;i<boyut;i++){
    	printf("%d ",*dizi+i);
	}*/

   getch();
    return 0;
}
