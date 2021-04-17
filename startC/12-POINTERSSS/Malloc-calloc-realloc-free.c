#include <stdio.h>
#include <stdlib.h>

//MALLOC CALLOC REALLOC-FREE Fonksiyonlar�

int main(){
	
	
	int *alan1=malloc(30*sizeof(int));// int 4 byte oldu�u i�in 120 bytel�k yer ay�r�r.
	
	int *alan2=calloc(30,sizeof(int));//120 bytel�k ter ay�r�r. Mallocdan fark� ay�r�lan alanda de�er varsa malloc temzilemez calloc temizler kullan�r.
	
	int i;
	for(i=0;i<10;i++){
		printf("alan2:%d           alan1:%d\n",alan2[i],alan1[i]);
	}
	alan1=realloc(alan1,5*sizeof(int));//realloc yeniden boyutlad�rma yapar. indisindeki elemanlar korunur. sadece boyutu k�rpar.
	
	for(i=0;i<5;i++){
		printf("alan1:%d\n",alan1[i]);
	}
	
	free(alan1);//kulland���m�z rami geri veriyoruz sisteme
	free(alan2);
	
	getch();
	return 0;
}
