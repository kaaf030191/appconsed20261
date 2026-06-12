#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

#include "Node.cpp"

class CircularList {
public:
	CircularList(): head(nullptr) {}
	
	Node *head;
	
	void insert();
	void show();
};

#endif
