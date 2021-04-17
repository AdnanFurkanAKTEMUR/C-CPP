#include "kutuphane.h"


int rastgele(){
	
	time_t deger;
	deger = time(NULL);
	
	return deger;
}
void yas(){
	FILE *kisilertxt;
	if((kisilertxt=fopen("Kisiler.txt","a"))==NULL){
		kisilertxt=fopen("..\\Kisiler.txt","a");
		int i=rastgele()%100;
   		fprintf(kisilertxt,"%d",i);
  		fprintf(kisilertxt," ");
    	fclose(kisilertxt);
	}
	else {	
		kisilertxt=fopen("Kisiler.txt","a");
		int i=rastgele()%100;
	    fprintf(kisilertxt,"%d",i);
	    fprintf(kisilertxt," ");
	    fclose(kisilertxt);
    }
}
void tcNo(){
	
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
	int *tc=malloc(sizeof(int)*12);
	
	r1=1+rastgele()%9;
	r2=rastgele()%10;	
	r3=rastgele()%10;
	while(r2==r3){
		r3=rastgele()%10;
		if(r2!=r3){
			break;
		}
	}
	r4=rastgele()%10;
	while(r3==r4){
		r4=rastgele()%10;
		if(r3!=r4){
			break;
		}
	}
	r5=rastgele()%10;
	while(r4==r5){
		r5=r5+rastgele()%10;
		r5=r5%10;
		if(r4!=r5){
			break;
		}
	}
	r6=rastgele()%10;
	while(r5==r6){
		r6=rastgele()%10;
		if(r5!=r6){
			break;
		}
	}
	r7=rastgele()%10;
	while(r6==r7){
		r7=rastgele()%10;
		if(r6!=r7){
			break;
		}
	}

	r8=rastgele()%10;
	while(r7==r8){
		r8=r8+6;
		r8=r8%10;
		if(r7!=r8){
			break;
		}
	}
	r9=rastgele()%10;
	
	r10 = ( 7*(r1+r3+r5+r7+r9) - (r2+r4+r6+r8) )%10;
	r11 = ( r1+r2+r3+r4+r5+r6+r7+r8+r9+r10 )%10; 

	tc[0]=r1;
	tc[1]=r2;
	tc[2]=r3;
	tc[3]=r4;
	tc[4]=r5;
	tc[5]=r6;
	tc[6]=r7;
	tc[7]=r8;
	tc[8]=r9;
	tc[9]=r10;
	tc[10]=r11;
	
	FILE *kisilertxt;int i;
	if((kisilertxt=fopen("Kisiler.txt","r"))==NULL){
		kisilertxt=fopen("..\\Kisiler.txt","a");
		for(i=0;i<11;i++){
			fprintf(kisilertxt,"%d",tc[i]);
		}
	    fprintf(kisilertxt," ");
	    fclose(kisilertxt);
	}
	else {
		
	
		kisilertxt=fopen("Kisiler.txt","a");
		
		for(i=0;i<11;i++){
			fprintf(kisilertxt,"%d",tc[i]);
		}
	    fprintf(kisilertxt," ");
	    fclose(kisilertxt);
	}
	//return tc;
	
}
void imei(){
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,a;
	int *imei=malloc(sizeof(int)*15);
	i1=1+rastgele()%9;
	i2=rastgele()%10;
	i3=rastgele()%10;
	while(i2==i3){
		i3=rastgele()%10;
		if(i2!=i3){
			break;
		}
	}
	i4=rastgele()%10;
		while(i3==i4){
		i4=rastgele()%10;
		if(i3!=i4){
			break;
		}
	}
	i5=rastgele()%10;
	while(i4==i5){
		i5=i5+rastgele()%10;
		i5=i5%10;
		if(i4!=i5){
			break;
		}
	}
	i6=rastgele()%10;
	while(i5==i6){
		i6=rastgele()%10;
		if(i5!=i6){
			break;
		}
	}
	i7=rastgele()%10;
	while(i6==i7){
		i7=rastgele()%10;
		if(i6!=i7){
			break;
		}
	}
	i8=rastgele()%10;
	while(i7==i8){
		i8=i8+6;
		i8=i8%10;
		if(i7!=i8){
			break;
		}
	}
	i9=rastgele()%10;
	while(i8==i9){
		i9=rastgele()%10;
		if(i8!=i9){
			break;
		}
	}
	i10=rastgele()%10;
	while(i9==i10){
		i10=i10+8;
		i10=i10%10;
		if(i9!=i10){
			break;
		}
	}
	i11=rastgele()%10;
	while(i10==i11){
		i11=rastgele()%10;
		if(i10!=i11){
			break;
		}
	}
	i12=rastgele()%10;
	i13=rastgele()%10;	
	int top=i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12+i13;
	a=top%10;
	a=10-a;
	i14=a;
	
	imei[0]=i1;
	imei[1]=i2;
	imei[2]=i3;
	imei[3]=i4;
	imei[4]=i5;
	imei[5]=i6;
	imei[6]=i7;
	imei[7]=i8;
	imei[8]=i9;
	imei[9]=i10;
	imei[10]=i11;
	imei[11]=i12;
	imei[12]=i13;
	imei[13]=i14;
	
	FILE *kisilertxt;
	int i;
	if((kisilertxt=fopen("Kisiler.txt","r"))==NULL){
		kisilertxt=fopen("..\\Kisiler.txt","a");
		fprintf(kisilertxt,"(");
	
		for(i=0;i<14;i++){
			fprintf(kisilertxt,"%d",imei[i]);
		}
		fprintf(kisilertxt,")");
		fprintf(kisilertxt,"\n");
		fclose(kisilertxt);
	}
	else {
		
	
		kisilertxt=fopen("Kisiler.txt","a");
		fprintf(kisilertxt,"(");
		
		for(i=0;i<14;i++){
			fprintf(kisilertxt,"%d",imei[i]);
		}
		fprintf(kisilertxt,")");
		fprintf(kisilertxt,"\n");
		fclose(kisilertxt);
	}
	//return imei;

	
}

void tel(){
	
	int no[]={554,553,552,551,532,534,531,538,539,541,542,543,544};
	long long int  rastNo=rastgele()%10000000;
	int x=rastgele()%13;
	long long int a=no[x];
	a=a*10000000;	
	a=a+rastNo;
	FILE *kisilertxt;
	
	if((kisilertxt=fopen("Kisiler.txt","r"))==NULL){
		kisilertxt=fopen("..\\Kisiler.txt","a");
		fprintf(kisilertxt,"0%lld",a);
		fprintf(kisilertxt," ");
		fclose(kisilertxt);
	}
	else{
		kisilertxt=fopen("Kisiler.txt","a");
		fprintf(kisilertxt,"0%lld",a);
		fprintf(kisilertxt," ");
		fclose(kisilertxt);
	}
	
	
//	return a;
	
}

void rastgeleKisi(){
	
	
	FILE *dosya,*kisilertxt;
	char isim[3001][15];
    char soyIsim[3001][15];
    int i=0;
    
	if((dosya=fopen("random_isimler.txt","r"))==NULL){
     //   printf("dosya bulunamadi...");
        dosya=fopen("..\\random_isimler.txt","r");
        for(i=0;i<3000;i++){
    	fscanf(dosya,"%s",&isim[i]);fscanf(dosya,"%s",&soyIsim[i]);
    	}
        fclose(dosya);
    }
    else{
	
    dosya=fopen("random_isimler.txt","r");
    
    for(i=0;i<3000;i++){
    	fscanf(dosya,"%s",&isim[i]);fscanf(dosya,"%s",&soyIsim[i]);
	}
	
	fclose(dosya);
	}
  	int a=rastgele()%2999;
  	if((kisilertxt=fopen("Kisiler.txt","a"))==NULL){
  		//printf("dosya bulunamadi");
  		kisilertxt=fopen("..\\Kisiler.txt","a");
  		fprintf(kisilertxt,"%s",isim[a]);
    	fprintf(kisilertxt," ");
    	fprintf(kisilertxt,"%s",soyIsim[a]);
   		fprintf(kisilertxt," ");
   		fclose(kisilertxt);
	  }
  
	else {
		kisilertxt=fopen("Kisiler.txt","a");
    	fprintf(kisilertxt,"%s",isim[a]);
    	fprintf(kisilertxt," ");
    	fprintf(kisilertxt,"%s",soyIsim[a]);
    	fprintf(kisilertxt," ");
    	fclose(kisilertxt);
	}
    
}

int tcKontrol(long long int gelenTc){
	/*r10 = ( 7*(r1+r3+r5+r7+r9) - (r2+r4+r6+r8) )%10;
	int a=(7*(gelenTc[0]+gelenTc[2]+gelenTc[4]+gelenTc[6]+gelenTc[8])-(gelenTc[1]+gelenTc[3]+gelenTc[5]+gelenTc[7]))%10
	r11 = ( r1+r2+r3+r4+r5+r6+r7+r8+r9+r10 )%10; */
	int bol[12];
	bol[0]=gelenTc%100000000000/10000000000;
	bol[1]=gelenTc%10000000000/1000000000;
	bol[2]=gelenTc%1000000000/100000000;
	bol[3]=gelenTc%100000000/10000000;
	bol[4]=gelenTc%10000000/1000000;
	bol[5]=gelenTc%1000000/100000;
	bol[6]=gelenTc%100000/10000;
	bol[7]=gelenTc%10000/1000;
	bol[8]=gelenTc%1000/100;
	bol[9]=gelenTc%100/10;
	bol[10]=gelenTc%10;

	if(bol[9]==(7*(bol[0]+bol[2]+bol[4]+bol[6]+bol[8])-(bol[1]+bol[3]+bol[5]+bol[7]))%10 && bol[10]==(bol[0]+bol[1]+bol[2]+bol[3]+bol[4]+bol[5]+bol[6]+bol[7]+bol[8]+bol[9])%10){
		return 1;
	}
	else{
		return 0;
	}
}
int imeKontrol(char gelenImei[]){
	int dizi[15];
	int i;
	for(i=0;i<14;i++){
		dizi[i]=(int)gelenImei[i+1]-48;		
	}
    
	int toplam=dizi[0]+dizi[1]+dizi[2]+dizi[3]+dizi[4]+dizi[5]+dizi[6]+dizi[7]+dizi[8]+dizi[9]+dizi[10]+dizi[11]+dizi[12];
	int a;
	a=toplam%10;
	a=10-a;
	if(a==dizi[13]) return 1;
	else return 0;
}
void dosyadanOku(){
	FILE *kisilertxt;
	long long int tc[3001][2];
	char isim[3001][12];
	char soyisim[3001][12];
	char yas[3001][4];
	char telno[3001][12];
	char ime[17];
	int basamaklar[12];
	int i=0;
	long long int dene;
	
	int a,kontrol,kontrol2,gecerli=0,gecersiz=0,gecerli2=0,gecersiz2=0;
	int dizi[12];
	if((kisilertxt=fopen("Kisiler.txt","r"))==NULL){
		kisilertxt=fopen("..\\Kisiler.txt","r");
		while(!feof(kisilertxt)){
			fscanf(kisilertxt,"%lld %s %s %s %s %s",&tc[i],&isim[i],&soyisim[i],&yas[i],&telno[i],&ime);
			
			//Tc kontrol
			dene=tc[i][0];
			kontrol=tcKontrol(dene);
			if(kontrol==1)gecerli++;
			else if(kontrol==0)gecersiz++;
			else printf("bir yerde hata seziyorum.\n");
			
			//imei kontrol
			kontrol2=imeKontrol(ime);
			if(kontrol2==1)gecerli2++;
			else if(kontrol2==0)gecersiz2++;
			else printf("bir yerde hata seziyorum.\n");
						
			i++;			
		}
	gecerli--;
	gecerli2--;
	printf("***************************\n******TC kimlik kontrol******\n%d Geçerli\n%d Geçersiz\n***************************\n\n",gecerli,gecersiz);
	printf("***************************\n******Ýmei kontrol******\n%d Geçerli\n%d Geçersiz\n***************************\n\n",gecerli2,gecersiz2);
//	printf("%s\n",ime[0]);
	fclose(kisilertxt);
	}
	else {
	
		kisilertxt=fopen("Kisiler.txt","r");
		while(!feof(kisilertxt)){
			fscanf(kisilertxt,"%lld %s %s %s %s %s",&tc[i],&isim[i],&soyisim[i],&yas[i],&telno[i],&ime);
			
			//Tc kontrol
			dene=tc[i][0];
			kontrol=tcKontrol(dene);
			if(kontrol==1)gecerli++;
			else if(kontrol==0)gecersiz++;
			else printf("bir yerde hata seziyorum.\n");
			
			//imei kontrol
			kontrol2=imeKontrol(ime);
			if(kontrol2==1)gecerli2++;
			else if(kontrol2==0)gecersiz2++;
			else printf("bir yerde hata seziyorum.\n");
						
			i++;			
		}
	gecerli--;
	gecerli2--;
	printf("***************************\n******TC kimlik kontrol******\n%d Geçerli\n%d Geçersiz\n***************************\n\n",gecerli,gecersiz);
	printf("***************************\n******Ýmei kontrol******\n%d Geçerli\n%d Geçersiz\n***************************\n\n",gecerli2,gecersiz2);
//	printf("%s\n",ime[0]);
	fclose(kisilertxt);
	}
}
void menu(){

	int x;
	int i=0;
	while(i==0){
		
		printf("1- Rastgele  Kiþi Üret\n2- Üretilmiþ Dosyayý Kontrol Et\n3- Çýkýþ\n");
		printf("Seçiminiz:");
		scanf("%d",&x);
		if(x==1){	
		printf("Kaç kiþi oluþturacaksýnýz:");int kisiSayisi;scanf("%d",&kisiSayisi);
		printf("Lütfen bekleyin bu biraz zaman alabilir...(1 kiþi oluþturmak ortalama 5 saniye sürmektedir.)\n");
		void (*ptr[5])()={tcNo,rastgeleKisi,yas,tel,imei};

		int i,a;
		for(a=0;a<kisiSayisi;a++){
			for(i=0;i<5;i++){
			ptr[i]();
			}
		}
		
		
			printf("\nRastgele kiþi üretilmiþ olup Kisiler.txt dosyasýna baþarýlý bir þekilde kaydedilmiþtir.\n***************************************************************************************\n\n");
			
		}
		else if(x==2){
			dosyadanOku();
		}
		else if(x==3){
			printf("\nÇýkýþýnýz Yapýldý...\n");
			break;
		}
		else{
			printf("Hatalý Giriþ. Sadece '1' '2' ve '3' girebilirsiniz.Tekrar deneyiniz.\n");
		}
	}

}

