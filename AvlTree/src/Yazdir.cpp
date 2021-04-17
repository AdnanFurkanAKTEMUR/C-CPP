/**
* @file: Yazdir.cpp
* @description: Aðaçlarý post order þeklinde yazdýrýr
* @course: 2. ogretim C grubu
* @assignment: odev 2
* @date: bitis tarihi:27.12.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/

#include "Yazdir.hpp"


void Yazdir::postOrder(AVLNode *root){
	if(root != NULL) 
	{ 
		
		postOrder(root->left); 
		postOrder(root->right);
		cout << root->key << " "<<root->isim<<endl;
		if(root->isim=="A"){
			postOrder(root->calisanlar);
		}
		if(root->isim=="B"){
			postOrder(root->calisanlar);
		}
		if(root->isim=="C"){
			postOrder(root->calisanlar);
		}
	} 
}
