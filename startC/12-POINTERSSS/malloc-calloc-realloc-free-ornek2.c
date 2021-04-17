#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//pointer ve malloc ile iki boyutlu diziler

int main(){
//	setlocale(LC_ALL,"Turkish");
	char** ikiBoyutlu=calloc(sizeof(char*),3);
//	char** ikiBoyutlu=malloc(sizeof(char*)*3);
	
	int i;
	for(i=0;i<3;i++){
		ikiBoyutlu[i]=calloc(10,sizeof(char));
	}
	for(i=0;i<3;i++){
		gets(ikiBoyutlu[i]);
	}
	for(i=0;i<3;i++){
		printf("%s\n",ikiBoyutlu[i]);
		//puts(ikiBoyutlu[i]);
	}
	
	free(ikiBoyutlu);
	getch();
	return 0;
}
