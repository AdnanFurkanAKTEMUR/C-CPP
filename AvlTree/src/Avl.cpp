/**
* @file: Avl.cpp
* @description: Agacýn saga veya sola dengelenmesini saglar.
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "Avl.hpp"



AVL::AVL(){
	root=NULL;
}

bool AVL::isEmpty(){
	return root==NULL;
}

AVLNode* AVL::rightRotate(AVLNode* node){
	AVLNode* temp= node->left;
	AVLNode* temp2=temp->right;
	temp->right=node;
	node->left=temp2;
		
	node->height=max(height(node->left),height(node->right))+1;
	temp->height=max(height(temp->left),height(temp->right))+1;
	return temp;
}

AVLNode* AVL::leftRotate(AVLNode* node){
	AVLNode* temp=node->right;
	AVLNode* temp2=temp->left;
	temp->left=node;
	node->right=temp2;
		
	node->height=max(height(node->left),height(node->right))+1;
	temp->height=max(height(temp->left),height(temp->right))+1;
		
	return temp;
}
int AVL::getBalance(AVLNode *N) 
{ 
	if (N == NULL) 
		return 0; 
	return height(N->left) - height(N->right); 
} 
int AVL::height(AVLNode *N) 
{ 
	if (N == NULL) 
		return 0; 
	return N->height; 
} 
		
		
