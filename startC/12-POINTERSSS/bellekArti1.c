#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=5, *xx;
	float y=5.1, *yy;
	double z=5.2, *zz;
	char karakter='a', *kk;
	
	xx=&x;
	yy=&y;
	zz=&z;
	kk=&karakter;
	
	printf("%x --> %x\n",xx,xx+1);//4 byte
	printf("%x --> %x\n",yy,yy+1);//4 byte
	printf("%x --> %x\n",zz,zz+1);//8 byte
	printf("%x --> %x\n",kk,kk+1);//1 byte
	
	
	getch();
	return 0;
}
