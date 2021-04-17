
//1-1000 arasi asal sayilari bulan program

#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi){
	int carpan;
	for(carpan=2;carpan<=sayi/2;carpan++){
		if(sayi%carpan==0){
			return 0;
		}
	}
	
	return 1;
}
int sayial(){
	printf("kaca kadar asal sayilari bulmak istiyorsunuz:");
	int x;
	scanf("%d",&x);
	return x;
}



int main(){
	
	
	int sayac,sayi;
	sayi=sayial();
	int i;
	for(i=2;i<=sayi;i++){
		if(asalmi(i)==1){
			sayac++;
			printf("%d asaldir\n",i);
		}
	}
	
	
	printf("%d kadar asal sayi vardir...",sayac);
	getch();
	return 0;
}
