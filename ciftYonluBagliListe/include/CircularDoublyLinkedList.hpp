/**
* @file: test.cpp
* @description: CircularDoublyLinkedList.cpp nin header dosyasi
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/

#ifndef CircularDoublyLinkedList_hpp
#define CircularDoublyLinkedList_hpp
#include "ListeTutucu.hpp"

class CircularDoublyLinkedList{
	
	Node *head=NULL;
public:
	Node *elemanEkle(int okunanData);
	~CircularDoublyLinkedList();
};

#endif
