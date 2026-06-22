#ifndef NODE_CPP
#define NODE_CPP

#include "Product.h"

struct Node {
public:
	Node() {}
	Node(Product product): product(product), next(nullptr) {}
	
	Product product;
	
	Node *next;
};

#endif
