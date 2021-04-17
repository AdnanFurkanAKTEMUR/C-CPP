#include <stdlib.h>
#include <stdio.h>

int main(){
	
	/*char *takimlar[]={"Galatasaray","Fenerbahce","Besiktas","Trabzonspor","YalovaSpor"};
	int i;
	for(i=0;takimlar[i]!='\0';i++){// --------------------------------------ONEMLIIIIIIIIIIII!!!!!!!!!!!!!!!!!!
		printf("%s  ---   ",*(takimlar+i));
	}*/
	char ulkleler[5][20];
	char *ulkeler[5];
	
	int i;
	for(i=0;i<5;i++){
		printf("%d. ulke:",i+1);
		scanf("%s",ulkleler[i]);
		printf("%s --> ulkleler[i]\n",ulkleler[i]);
		ulkeler[i]=&ulkleler[i];
		printf("%s --> *(ulkeler+i)\n",*(ulkeler+i));
		printf("%x --> ulkeler[i]\n",ulkeler[i]);
	}
	
	getch();
	return 0;
}
