#ifndef SIMPLELIST_H
#define SIMPLELIST_H

#include "Node.cpp"
#include "Product.h"

class SimpleList {
public:
	SimpleList(): head(nullptr) {}
	
	Node *head;
	
	bool existsProductoById(int id);
	void insert(Product product);
	void show();
	void showById(int id);
};

#endif
