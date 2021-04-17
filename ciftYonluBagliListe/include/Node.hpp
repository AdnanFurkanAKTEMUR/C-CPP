/**
* @file: test.cpp
* @description: Ndoe.cpp nin header dosyasi
* @course: 2. ogretim C grubu
* @assignment: odev 1
* @date: bitis tarihi:29.11.2020
* @author: Adnan Furkan AKTEMUR b141210013@sakarya.edu.tr
*/


#ifndef Node_hpp
#define Node_hpp
#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *prev;
	Node *next;
	Node(const int& data=0, Node *next=NULL,Node *prev=NULL);
};
#endif
