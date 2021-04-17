#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	printf("1 den N e kada olan sayýlarýn toplamý.\n");
	printf("n i giriniz:");
	int x;
	scanf("%d",&x);
	
	int toplam=0;
	int i;
	for(i=0;i<=x;i++){
		toplam=toplam+i;
	}
	
	printf("Toplam = %d\n",toplam);

	
	
	
	getch();
	
	return 0;
}
