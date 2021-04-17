#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//strlwr ve strupr
int main(){
	
	printf("bir kelime giriniz:");
	char kelime1[10];
	gets(kelime1);
	
	strlwr(kelime1);
	printf("%s",kelime1);
	strupr(kelime1);
	printf("%s",kelime1);
	
	
	getch();
	return 0;
}
