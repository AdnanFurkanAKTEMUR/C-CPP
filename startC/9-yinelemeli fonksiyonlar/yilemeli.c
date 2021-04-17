#include <stdlib.h>
#include <stdio.h>

//özyinelemeli
int fakt(int sayi){
	if (sayi==1){
		return 1;
	}
	else{
		return sayi*fakt(sayi-1);
	}
}
//yinelemeli
int fakt2(int sayi){
	int toplam=1,i;
	for(i=0;i<sayi;i++){
		toplam=toplam*(i+1);
	}
	return toplam;
}
int main(){
	
	printf("ozyinelemeli %d\n",fakt(5));
	printf("yinelemeli %d\n",fakt2(5));	
	getch();
	return 0;
}
