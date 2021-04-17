
/**
* @file: AvlNode.hpp
* @description: AvlNode.cpp kütüphanesidir
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#ifndef AvlNode_hpp
#define AvlNode_hpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
using namespace std;

class AVLNode{
	public:
		int key;
		AVLNode* left;
		AVLNode* right;
		AVLNode* calisanlar;
		int height;
		string isim;
	
};

#endif
