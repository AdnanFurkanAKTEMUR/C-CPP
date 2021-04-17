#ifndef kutuphane_H
#define kutuphane_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Math.h>
#include <string.h>
#include <locale.h>

struct kisi{
	char isim;
	int kimlik;
	int Imei;
	int tel;
};
typedef struct kisi* Kisi;

void rastgeleKisi();
int rastgele();
void tcNo(); 
void imei();
void tel();
void dosyadanOku();
void menu();
int tcKontrol();
int imeKontrol(char gelenImei[]);


#endif
