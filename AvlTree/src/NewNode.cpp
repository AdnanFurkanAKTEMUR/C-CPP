/**
* @file: Newnode.cpp
* @description: Yeni eleman olusturur
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "NewNode.hpp"

AVLNode* Newnode::newNode(int key,string isim, AVLNode* calis){
	AVLNode* root=new AVLNode();
		root->key=key;
		root->left=NULL;
		root->right=NULL;
		root->calisanlar=calis;
		root->height=1;
		root->isim=isim;
		return root;
}
