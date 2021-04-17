#include <stdio.h>
#include <stdlib.h>

char degerAl(char *ptr2){
	int i;
	for(i=0;i<5;i++){
		scanf(" %c",ptr2+i);
	}
	
	return *ptr2;
}

void yazdir(char *gelenDizi,int boyut){
	int i;
	for(i=0;i<boyut;i++){
		
		printf("%c",*(gelenDizi+i));
		
	}
}

int main(){
	
	//char dizi1[20];
//	char *dizi1=calloc(5,sizeof(char));
	char *dizi1=malloc(sizeof(char)*5);
	
	char *ptr;	
	ptr=&dizi1[0];
	
//	*ptr='x';
//	*(ptr+1)='y';
/*	scanf(" %c",&*ptr);
	scanf(" %c",ptr+1);
	printf("%c",dizi1[0]);
	printf("%c",dizi1[1]);
	int i;*/
	
	*ptr=degerAl(ptr);
	
	yazdir(ptr,5);
	
	/*
	int i;
	for(i=0;i<5;i++){
		printf("%c",dizi1[i]);
	}
	*/
	

	
	
	getch();
	
	return 0;
}
