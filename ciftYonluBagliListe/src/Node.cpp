/**
* @file: test.cpp
* @description: node* yapimizi tanimladigimiz yer
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#include "Node.hpp"

Node::Node(const int& data, Node *next,Node *prev){
	this->data=data;
	this->next=next;
	this->prev=prev;
}
