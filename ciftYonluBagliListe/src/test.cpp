 	/**
* @file: test.cpp
* @description: test.cpp programin main fonksiyonunun calistigi yerdir
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/



#include <fstream>
#include <sstream>
#include "CircularDoublyLinkedList.hpp"



int main(){
	
	ifstream okumaDosyasi;// okuma de�i�keni tanimladim
	string satir;// okunan satirlari satir stringine atayaca��m.
	okumaDosyasi.open("Sayilar.txt");// okunacak dosyayi actim
	ListeTutucu *tut=new ListeTutucu();//okunan sastirlardaki orta elemani g�ndermek icin liste sinifindan bir tut degiskeni olusturdum
	while(getline(okumaDosyasi,satir)){// satir satir okuyacak
		CircularDoublyLinkedList *ekle=new CircularDoublyLinkedList();//okunan elemanlar�n node* eklenmesi icin
		string str="";//bosluga gore ayirmak icin bir degisken
		Node *temp;
		int elemanSayisi=0,boslukSayisi=0;//bir satirdaki sayilari ve bosluklari almak icin
		for(int j=0;j<satir.length();j++){
			if(satir[j]==' '){//okunan satirdaki deger bosluga denk gelirse burasi calisacak
				stringstream geek(str);//daha �nce else kisminda okumus oldugu degeri alip int cevirecek
				int sayi=0;
				geek>>sayi;
				ekle->elemanEkle(sayi);	//burada sayi degeri ile bir node olusturdum	
				str="";//ve str yi yeni eleman alabilmesi icin sifirladim
				elemanSayisi++;
			}
			else{
				str=str+satir[j];	//karakter karakter aldigi icin bosluk gelene kadar sayilar almak icin
				if(j==satir.length()-1){//satir sonu okumak icin
					stringstream geek(str);
					int sayi=0;
					geek>>sayi;
					//Node* temp;
					temp=ekle->elemanEkle(sayi); // burada son eleman� liste ortas� olarak se�tik
					elemanSayisi++;
					
					tut->buyukTutucu(temp,elemanSayisi);//olusturlan  dairesel bagli listenin bir elemanini carprazlama islemleri icin gonderir
					tut->kucukTutucu(temp,elemanSayisi);		
					str="";
					
				}
		}
	 }
	}
	
	tut->yazdir();
	okumaDosyasi.close();
	
	system("pause");
	return 0;	
}
