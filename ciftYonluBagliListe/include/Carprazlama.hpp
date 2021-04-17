/**
* @file: test.cpp
* @description: Carprazlama.cpp nin header dosyasi
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/

#ifndef Carprazlama_hpp
#define Carprazlama_hpp
#include "Node.hpp"
#include "CircularDoublyLinkedList.hpp"

class Carprazlama{
	private:
		Node *kucukIlk;
		Node *buyukIlk;
		
	public:
		void carprazla(Node *kucuk,int kucukElemanSayisi, Node *buyuk,int buyukElemanSayisi);
		~Carprazlama();
};

#endif
