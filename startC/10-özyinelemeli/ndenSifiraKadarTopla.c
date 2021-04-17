#include <stdlib.h>
#include <stdio.h>

int sayial(){
	
	printf("sayiyi giriniz:");
	int x;
	scanf("%d",&x);
	return x;
}

int topla(int sayi){
	if(sayi==0){
		return 0;
	}
	else{
		return sayi+topla(sayi-1);
	}
	
}

int main(){
	int sayi1=sayial();
	printf("toplam:%d",topla(sayi1));
	
	getch();
	return 0;
}
