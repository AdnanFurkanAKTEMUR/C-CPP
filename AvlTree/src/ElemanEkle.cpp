
/**
* @file: ElemanEkle.cpp
* @description: Agaca eleman eklenmesini saglar.
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "ElemanEkle.hpp"


AVLNode* ElemanEkle::insert(AVLNode* node, AVLNode* calisanlar, int key,string isim){
	if(node==NULL){
		Newnode *ekle;
		return ekle->newNode(key,isim,calisanlar);
	}
	if(key<=node->key){
		node->left=insert(node->left,calisanlar,key,isim);
	}
	else if(key>node->key){
		node->right=insert(node->right,calisanlar,key,isim);
	}
	else{
		return node;
	}
	AVL b;
	AVL *c;
	node->height = 1 + max(b.height(node->left), b.height(node->right));	
	int balance = b.getBalance(node);
	
	if (balance > 1 && key < node->left->key) 
		return c->rightRotate(node); 
		
	if (balance < -1 && key > node->right->key) 
		return c->leftRotate(node); 
		
	if (balance > 1 && key > node->left->key) 
	{ 
		node->left = c->leftRotate(node->left); 
		return c->rightRotate(node); 
	} 

	
	if (balance < -1 && key < node->right->key) 
	{ 
		node->right = c->rightRotate(node->right); 
		return c->leftRotate(node); 
	} 

	
	return node; 
}
