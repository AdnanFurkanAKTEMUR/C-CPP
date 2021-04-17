#include <stdio.h>
#include <stdlib.h>

void swap(int *sayi1,int *sayi2){
	
	int temp;
	temp=*sayi1;
	*sayi1=*sayi2;
	*sayi2=temp;
	printf("sayi1:%d sayi2:%d\n",*sayi1,*sayi2);
	printf("adressayi1:%x adressayi2:%x\n",sayi1,sayi2);
	
}

int main(){
	
	printf("degistirmek sayilar:");
	int x,y;
	scanf("%d %d",&x,&y);
	printf("sayi1:%d sayi2:%d\n",x,y);
	printf("adressayi1:%x adressayi2:%x\n",&x,&y);
	swap(&x,&y);
	
	getch();
	
	return 0;
}
