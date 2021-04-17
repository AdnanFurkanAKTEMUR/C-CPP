/**
* @file: test.cpp
* @description: gelen dugumlerin en buyuk ve en kucuk elemanli olanini bulup yakalama
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/



#include "ListeTutucu.hpp"


void ListeTutucu::buyukTutucu(Node *gelenDugum, int eleman){//gelen dugumlerin en buyugunu bulup carprazlama icin tutar
	if(buyuk==NULL){
		buyuk=gelenDugum;
		buyukIlk=buyuk;
		elemanSayisiBuyuk=eleman;
		//cout<<"ilk buyuk geldi"<<endl;
	}
	else if(gelenDugum->data>buyuk->data){
		//cout<<"daha buyugu geldi."<<endl;
		buyuk=gelenDugum;
		buyukIlk=buyuk;
		elemanSayisiBuyuk=eleman;
	}
	else{
	//	cout<<"eldeki daha buyuk"<<endl;
	}
	}
void ListeTutucu::kucukTutucu(Node *gelenDugum,int eleman){//gelen dugumlerin en kucugunu bulup carprazlama icin tutar
	
	if(kucuk==NULL){
		kucuk=gelenDugum;
		kucukIlk=kucuk;
		elemanSayisiKucuk=eleman;
		//cout<<"ilk kucuk geldi"<<endl;
			
	}
	else if(kucuk->data>gelenDugum->data){
		//cout<<"daha kucuk geldi"<<endl;
		kucuk=gelenDugum;
		kucukIlk=kucuk;
		elemanSayisiKucuk=eleman;
	}
	else{
		//cout<<"en kucugune sahibiz"<<endl;
	}
	
}
void ListeTutucu::yazdir(){
	cout<<endl<<endl;
	cout<<"******LISTELERIN ILK HALLERI******"<<endl;

	cout<<endl<<"***Buyuk Liste***"<<endl;
	
	Node *temp1;
	temp1=buyuk;
	
	do{
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
	while(temp1->next!=buyuk->next);
	cout<<endl;
	
	cout<<endl<<"***Kucuk Liste*** "<<endl;
	
	Node *temp2;
	temp2=kucuk;
	do{
		cout<<temp2->data<<" ";
		temp2=temp2->next;
	}
	while(temp2->next!=kucuk->next);
		cout<<endl;
		kucuk=kucukIlk;
		buyuk=buyukIlk;
		cout<<endl<<endl;
		cout<<"******LISTELERIN SON HALLERI******"<<endl;
		Carprazlama *carp=new Carprazlama();
		carp->carprazla(kucuk,elemanSayisiKucuk,buyuk,elemanSayisiBuyuk);//carprazlama icin gonderir
}

ListeTutucu::~ListeTutucu(){
	delete kucuk;
	delete kucukIlk;
	delete buyuk;
	delete buyukIlk;

}
