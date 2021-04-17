/**
* @file: test.cpp
* @description: gelen dugumlerle bir cift yonlu dairesel bagli liste olusturur
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/

#include "CircularDoublyLinkedList.hpp"

Node* CircularDoublyLinkedList::elemanEkle(int okunanData){//bagli liste olusturan ve node cinsinden geri donduren fonksiyon
	Node *yeniEleman=new Node(okunanData);
		
		if(head==NULL){
			
			yeniEleman->next=yeniEleman;
			yeniEleman->prev=yeniEleman;
			head=yeniEleman;
			return head;
			//cout<<"ilk eleman eklendi"<<endl;
		}
		else{
			Node *temp=head;
			while(temp->next!=head){
				temp=temp->next;
			}
			temp->next=yeniEleman;
			yeniEleman->prev=temp;
			
			yeniEleman->next=head;
			head->prev=yeniEleman;
			//head=yeniEleman;
			//cout<<"sona eleman eklendi"<<endl;
			return head;
		}

	
}

	CircularDoublyLinkedList::~CircularDoublyLinkedList(){
	
		delete head;
	}

