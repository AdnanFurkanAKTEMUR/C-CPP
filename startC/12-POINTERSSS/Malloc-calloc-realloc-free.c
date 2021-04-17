#include <stdio.h>
#include <stdlib.h>

//MALLOC CALLOC REALLOC-FREE Fonksiyonlarý

int main(){
	
	
	int *alan1=malloc(30*sizeof(int));// int 4 byte olduðu için 120 bytelýk yer ayýrýr.
	
	int *alan2=calloc(30,sizeof(int));//120 bytelýk ter ayýrýr. Mallocdan farký ayýrýlan alanda deðer varsa malloc temzilemez calloc temizler kullanýr.
	
	int i;
	for(i=0;i<10;i++){
		printf("alan2:%d           alan1:%d\n",alan2[i],alan1[i]);
	}
	alan1=realloc(alan1,5*sizeof(int));//realloc yeniden boyutladýrma yapar. indisindeki elemanlar korunur. sadece boyutu kýrpar.
	
	for(i=0;i<5;i++){
		printf("alan1:%d\n",alan1[i]);
	}
	
	free(alan1);//kullandýðýmýz rami geri veriyoruz sisteme
	free(alan2);
	
	getch();
	return 0;
}
