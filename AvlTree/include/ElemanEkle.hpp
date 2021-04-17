
/**
* @file: ElemanEkle.hpp
* @description: ElemanEkle.cpp kütüphanesidir
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/
#ifndef ElemanEkle_hpp
#define ElemanEkle_hpp
#include "Avl.hpp"

class ElemanEkle{
public:
	AVLNode* insert(AVLNode* node, AVLNode* calisanlar, int key,string isim);
};

#endif
