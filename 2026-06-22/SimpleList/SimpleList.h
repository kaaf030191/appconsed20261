#ifndef SIMPLELIST_H
#define SIMPLELIST_H

#include "Node.cpp"
#include "Product.h"

class SimpleList {
public:
	SimpleList(): head(nullptr) {}
	
	Node *head;
	
	bool existsById(int id);
	void insert(Product product);
	void show();
	void showById(int id);
	void deleteById(int id);
	void modifyById(int id, bool increment, int quantity);
};

#endif
