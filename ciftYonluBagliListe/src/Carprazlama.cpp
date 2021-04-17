/**
* @file: test.cpp
* @description: liste tutucudan gelen buyuk ve kucuk listeleri odev dokumaninda belirtildigi gibi carprazlar
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "Carprazlama.hpp"



void Carprazlama::carprazla(Node *kucuk,int kucukElemanSayisi, Node *buyuk,int buyukElemanSayisi){//carprazlama
			
			kucukIlk=kucuk;//orta elemani kaybetmemek icin
			buyukIlk=buyuk;
			int dataK[100];
			int dataB[100];
		if(kucukElemanSayisi==buyukElemanSayisi){
			
			for(int i=0;i<kucukElemanSayisi/2;i++){
				dataK[i]=kucuk->prev->data;//carprazlama iþlemleri
				dataB[i]=buyuk->next->data;
				kucuk->prev->data=dataB[i];
				buyuk->next->data=dataK[i];
				kucuk=kucuk->prev;
				buyuk=buyuk->next;
			}
			kucuk=kucukIlk;
			buyuk=buyukIlk;
			for(int i=0;i<kucukElemanSayisi/2;i++){
				dataK[i]=kucuk->next->data;//carprazlama iþlemleri
				dataB[i]=buyuk->prev->data;
				kucuk->next->data=dataB[i];
				buyuk->prev->data=dataK[i];
				kucuk=kucuk->next;
				buyuk=buyuk->prev;
			}
		cout<<endl<<"***Buyuk Liste***"<<endl;
		
		cout<<"Orta Elemani: "<<&buyukIlk<<endl;
		Node *temp3;
		temp3=buyuk;
		do{
			cout<<temp3->data<<" ";
			temp3=temp3->next;
		}
		while(temp3->next!=buyuk->next);
		cout<<endl;
	    cout<<endl<<"***Kucuk Liste***"<<endl;
		cout<<"Orta Elemani: "<<&kucukIlk<<endl;
		Node *temp2;
		temp2=kucuk;
			do{
			cout<<temp2->data<<" ";
			temp2=temp2->next;
		}
		while(temp2->next!=kucuk->next);
		cout<<endl;	
		}
		else {
			kucuk=kucukIlk;
			buyuk=buyukIlk;
			int datakN[100];
			int datakP[100];
			int databN[100];
			int databP[100];
			for(int i=0;i<kucukElemanSayisi/2;i++){
		
				kucuk=kucuk->next;
				datakN[i]=kucuk->data;
				
			}
			kucuk=kucukIlk;
			for(int i=0;i<kucukElemanSayisi/2+1;i++){
				kucuk=kucuk->prev;
				datakP[i]=kucuk->data;
				
			}
			kucuk=kucukIlk;
			for(int i=0;i<buyukElemanSayisi/2;i++){
				buyuk=buyuk->next;
				databN[i]=buyuk->data;
			
			}
			buyuk=buyukIlk;
			for(int i=0;i<buyukElemanSayisi/2+1;i++){
				buyuk=buyuk->prev;
				databP[i]=buyuk->data;
				
			}
			buyuk=buyukIlk;
		
			CircularDoublyLinkedList *ekle=new CircularDoublyLinkedList();
			CircularDoublyLinkedList *ekle2=new CircularDoublyLinkedList();
			Node *orta;
			Node *orta2;
	
			for(int i=kucukElemanSayisi/2;i>-1;i--){
				ekle->elemanEkle(datakN[i]);
			}
			ekle->elemanEkle(buyukIlk->data);
			
			for(int i=0;i<kucukElemanSayisi/2;i++){		
				
				orta=ekle->elemanEkle(datakP[i]);
			
			
			}
			//diðer liste
			for(int i=buyukElemanSayisi/2;i>-1;i--){
				ekle2->elemanEkle(databN[i]);
			}
			
			ekle2->elemanEkle(kucukIlk->data);
			for(int i=0;i<buyukElemanSayisi/2;i++){				
				orta2=ekle2->elemanEkle(databP[i]);
			}
			
			cout<<endl<<"***Buyuk Liste***"<<endl;
			cout<<"Orta Elemani: "<<buyukIlk->data<<endl;
			Node *temp3;
			temp3=orta;
			orta=orta->next;
			for(int i=0;i<kucukElemanSayisi;i++){
				cout<<orta->data<<" ";
				orta=orta->next;
			}
			cout<<endl;
			

			cout<<endl<<"***Kucuk Liste***"<<endl;
			cout<<"Orta Elemani: "<<kucukIlk->data<<endl;
			Node *temp2;
			temp2=orta2;
			orta2=orta2->next;
			for(int i=0;i<buyukElemanSayisi;i++){
				cout<<orta2->data<<" ";
				orta2=orta2->next;
			}
	
			cout<<endl;
			
		}
		
		}
Carprazlama::~Carprazlama(){
	delete kucukIlk;
	delete buyukIlk;
}
	
