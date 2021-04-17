#include <stdio.h>
#include <stdlib.h>
char degerAl(char *p1,int b1){
	printf("%d  tane kelime giriniz.\n",b1);
	int i,j;
	for(i=0;i<b1;i++){
	 scanf(" %c",&*(p1+i));	
	
	}
	
	return *p1;
}
void yazdir(char *p1,int b1){
	int i;
	for(i=0;i<b1;i++){
		printf("%c\n",*(p1+i));
	}
}
int main(){
	printf("calloc-pointer-function\n");
	
	
	printf("dizi ilk boyutu(int):");
	int b1;scanf("%d",&b1);
	printf("dizi 2.boyutu(int):");int b2;scanf("%d",&b2);
	
	char** dizi=calloc(b1,sizeof(char*));
	int i;
	for(i=0;i<b1;i++){
		dizi[i]=calloc(b2,sizeof(char));
	}
	
	char *p1;
	p1=&dizi[0][0];
	*p1=degerAl(p1,b1);
	printf("p1:%c\n",*p1);
	yazdir(p1,b1);
	
	
	getch();
	
	return 0;
}
