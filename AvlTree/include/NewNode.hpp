/**
* @file: NewNode.hpp
* @description: NewNode.cpp kütüphanesidir
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/

#ifndef Newnode_hpp
#define Newnode_hpp
#include "AvlNode.hpp"

class Newnode{
	public:
		AVLNode* newNode(int key,string isim, AVLNode* calis);
	
};
#endif
