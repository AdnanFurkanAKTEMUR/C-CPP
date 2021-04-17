#include <stdlib.h>
#include <stdio.h>

float add(float a,float b){
	return a+b;
}
float cikarma(float a,float b){
	if(a>=b){
		return a-b;
	}
	else{
		return b-a;
	}
}
float bolme(float a,float b){
	if(b!=0){
		return a/b;
	}
	else{
		return -1;
	}
}
float carpma(float a,float b){
	return a*b;
}

int main(){
	float (*ptr[4])(float,float)={add,cikarma,bolme,carpma};
	int secim;
	float a,b;
	printf("0=toplama 1=cikarma 2=bolme 3=carpma:");
	scanf("%d",&secim);
	printf("iki sayi giriniz:");
	scanf("%f %f",&a,&b);
	printf("sonuc:%.2f",ptr[secim](a,b));

	return 0;
}



