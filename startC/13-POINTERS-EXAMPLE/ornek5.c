#include <stdio.h>
#include <stdlib.h>

char degerAta(char *p1,int boyut){
	printf("18 karakter giriniz:\n");
	int i;
	for(i=0;i<boyut;i++){
		scanf(" %c",p1+i);
	}
	
	
	return *p1;
}
void diziYazdir(char *p1,int boyut){
	int i;
	for(i=0;i<boyut;i++){
		printf("%c",*(p1+i));
	}
}
int main(){
	
	
	char *dizi=malloc(sizeof(char)*18);
	char *p1;
	
	p1=&dizi[0];
	
	*p1=degerAta(p1,18);
	diziYazdir(p1,18);
getch();
	
	
	return 0;
}
