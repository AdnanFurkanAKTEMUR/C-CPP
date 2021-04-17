#include <stdlib.h>
#include <stdio.h>

void diziuzunlugu(char *dizininadresi){
	int dizininuzunlugu=0;
	int i;
	for(i=0;dizininadresi[i]!='\0';i++){
		dizininuzunlugu++;
		
	}
	printf("uzunluk:%d\n",dizininuzunlugu);

}


int main(){
	
	char dizi1[]={"adnan"};
	diziuzunlugu(&dizi1[0]);
	
	getch();
	return 0;
}
