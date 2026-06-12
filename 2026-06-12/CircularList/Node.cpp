#ifndef NODE_CPP
#define NODE_CPP

#include "Person.h"

struct Node {
public:
	Node() {}
	Node(Person person): person(person) {}
	
	Person person;
	
	Node *next;
};

#endif
