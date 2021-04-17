#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int *sayiDizisi=calloc(4,sizeof(int));
	
	sayiDizisi[0]=0;
	sayiDizisi[1]=1;
	sayiDizisi[2]=22;
	sayiDizisi[3]=333;
	
	int i;
	int toplam=0;
	for(i=0;i<4;i++){
		printf("sayiDizi:%d \n",sayiDizisi[i]);
		toplam=toplam+sayiDizisi[i];
		printf("ara toplam:%d\n",toplam);
	}
	printf("toplam:%d\n",toplam);
	printf("\n*====================================*\n\n");
	char *karakterDizi=calloc(5,sizeof(char));
	char *karakterDizi2=calloc(7,sizeof(char));
	gets(karakterDizi2);
	for(i=0;i<5;i++){
		scanf(" %c",&karakterDizi[i]);
	}
	printf("karakterDizi2:%s\n",karakterDizi2);
	printf("bitiii\n");
	for(i=0;i<5;i++){
		
		printf("%c",karakterDizi[i]);
	}
	
	free(sayiDizisi);
	free(karakterDizi);
	getch();
	return 0;
}
