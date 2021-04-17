#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//STRCMP karþýlaþtýrma
int main(){
	
	char meyve1[]="muz";
	char meyve2[]="kivi";
	
	if(strcmp(meyve1,meyve2)==0){
		printf("bunlar esittir");
	}
	else if(strcmp(meyve1,meyve2)>0){
		printf("meyve1 buyuktur.");
	}
	else if(strcmp(meyve1,meyve2)<0){
		printf("meyve 2 buyuktur");
	}
	
	getch();
	return 0;
}
