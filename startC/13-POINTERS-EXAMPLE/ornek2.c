#include <stdio.h>
#include <stdlib.h>

int *degerAl(int gelenDizi[]){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&gelenDizi[i]);
	}
	return gelenDizi;
}
void *yazdir(int gelenDizi[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",gelenDizi[i]);
	}
}

int main(){
	
	int dizi=calloc(5,sizeof(int));
	int *degerTutucu;
	int dizi1=malloc(sizeof(int)*5);
	int *degerTutucu2;
	
	printf("callocla olusturulan dizi...\n");
	degerTutucu=degerAl(dizi);
	yazdir(degerTutucu);	
	printf("mallocla olusturulan dizi...\n");
	degerTutucu2=degerAl(dizi1);
	yazdir(degerTutucu2);
	
	getch();
	return 0;
}
