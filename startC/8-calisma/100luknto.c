//100 lük notun 4 lük nota karþýlýðý

#include <stdlib.h>
#include <stdio.h>
void notHesapla(){
	printf("notunuzu giriniz:");
	float not100;
	scanf("%f",&not100);
	float bolum=25;
	printf("4 luk karsiligi:%f\n",not100/25);
	
}
char devam(){
	printf("devam etmek istiyormusunuz?(e veya h)");
	int karakter;
	scanf(" %c",&karakter);
	
	return karakter;
}

int main(){
	int x=1;
	char kar;
	while(x==1){
		notHesapla();
		kar=devam();
		if(kar=='h'||kar=='H'){
			break;
		}
		
	}
	
	
	
	
	
	
	return 0;
}
