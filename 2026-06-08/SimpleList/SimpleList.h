#ifndef SIMPLELIST_H
#define SIMPLELIST_H

#include "Node.cpp"

class SimpleList {
public:
	SimpleList(): head(nullptr) {}
	
	Node *head;
	
	void insert(int value);
	void show();
};

#endif
