/**
* @file: test.cpp
* @description: ListeTutucu.cpp nin header dosyasi
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#ifndef ListeTutucu_hpp
#define ListeTutucu_hpp
#include "Carprazlama.hpp"


class ListeTutucu{
private:
	Node *kucuk;
	Node *kucukIlk;
	Node *buyuk;
	Node *buyukIlk;
	int elemanSayisiKucuk;
	int elemanSayisiBuyuk;
public:
	void buyukTutucu(Node *gelenDugum,int eleman);
	void kucukTutucu(Node *gelenDugum,int eleman);
	void yazdir();
	~ListeTutucu();
};
#endif
