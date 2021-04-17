/**
* @file: Avl.hpp
* @description: Avl.cpp kütüphanesidir
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#ifndef Avl_hpp
#define Avl_hpp
#include "NewNode.hpp"

class AVL{
	
	public:
		AVLNode* root;
		AVL();
		bool isEmpty();
	    int height(AVLNode *N);
		AVLNode* rightRotate(AVLNode* node);
		AVLNode* leftRotate(AVLNode* node);
		int getBalance(AVLNode *N);
	
};
#endif
