#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int sayi;
	printf("%x\n",&sayi);printf("sayi gir:");
	scanf("%d",&sayi);
	int *sayininAdresi;
	sayininAdresi=&sayi;
	printf("sayininiAdresi:%x\n",sayininAdresi);
	printf("*sayininDEgeri:%d\n",*sayininAdresi);
	
	
	
	
	getch();
	return 0;
}
