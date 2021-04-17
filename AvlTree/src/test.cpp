
/**
* @file: test.cpp
* @description: Dosyadan okur sýnýflarýmýzý çaðýrýp gerekli iþlemleri yapar
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "Yazdir.hpp"



int main(){
	SetConsoleOutputCP(65001);//Türkçe karakter okumak için
	AVLNode *root=NULL;
	AVLNode *rootA=NULL;
	AVLNode *rootB=NULL;
	AVLNode *rootC=NULL;;
	AVLNode *rootD=NULL;
	ElemanEkle *ekle;
	int firmaA=0,firmaB=0,firmaC=0;
	
	ifstream okumaDosyasi;//okumak icin degisken tanimladim
	string satir;// okudugum satirlari bu degiskende saklayip gonderecegim
	
	okumaDosyasi.open("dosya.txt");
	
	string dfirmaA[100],dfirmaB[100],dfirmaC[100];
	string isimA[100],isimB[100],isimC[100];
	int yilA[100],yilB[100],yilC[100];
	int a=0, a2=0, b=0, b2=0,c=0,c2=0;
	int yA=0,yB=0,yC=0;
	
	while(getline(okumaDosyasi,satir)){
			if(satir[0]=='A'){
				firmaA++;
			}
			if(satir[0]=='B'){
				firmaB++;
			}
			if(satir[0]=='C'){
				firmaC++;
			}
		
			string str="";
			int sSayisi=0;
			for(int i=0;i<satir.length();i++){
				if(satir[i]=='#'){
					if(satir[0]=='A'){
						if(sSayisi==0){
							dfirmaA[a]=satir[0];
							str="";
							a++;
						}
						if(sSayisi==1){
							isimA[a2]=str;
							
							str="";	
							a2++;
						}
						sSayisi++;
						
					}
					if(satir[0]=='B'){
						if(sSayisi==0){
							dfirmaB[b]=satir[0];
							str="";
							b++;
						}
						if(sSayisi==1){
							isimB[b2]=str;
							str="";	
							b2++;
						}
						sSayisi++;
						
					}
					if(satir[0]=='C'){
						if(sSayisi==0){
							dfirmaC[c]=satir[0];
							str="";
							c++;
						}
						if(sSayisi==1){
							isimC[c2]=str;
							str="";
							c2++;
						}
						sSayisi++;
						
					}
			
				}
				else{
					str=str+satir[i];
					if(i==satir.length()-1){
						if(satir[0]=='A'){
							stringstream geek(str);
							int sayi;
							geek>>sayi;
							yilA[yA]=sayi;
							str="";
							yA++;
						}
						if(satir[0]=='B'){
							stringstream geek(str);
							int sayi;
							geek>>sayi;
							yilB[yB]=sayi;
							str="";
							yB++;
						}
						if(satir[0]=='C'){
							stringstream geek(str);
							int sayi;
							geek>>sayi;
							yilC[yC]=sayi;
							str="";
							yC++;
						}
					}
				}
			}
			
		}
		for(int i=0;i<firmaA;i++){
			rootA=ekle->insert(rootA,NULL,yilA[i],isimA[i]);
		}
		for(int i=0;i<firmaB;i++){
			rootB=ekle->insert(rootB,NULL,yilB[i],isimB[i]);
		}
		for(int i=0;i<firmaC;i++){
			rootC=ekle->insert(rootC,NULL,yilC[i],isimC[i]);
		}
		root=ekle->insert(root,rootA,firmaA,"A");
		root=ekle->insert(root,rootB,firmaB,"B");
		root=ekle->insert(root,rootC,firmaC,"C");
	
		

	okumaDosyasi.close();


	
	Yazdir yaz;
	yaz.postOrder(root);
	
	system("pause");
	return 0;

}
