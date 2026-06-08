#ifndef SIMPLELIST_CPP
#define SIMPLELIST_CPP

#include <iostream>

#include "SimpleList.h"

void SimpleList::insert(int value) {
	Node *node = new Node(value);
	
	if(head == nullptr) {
		head = node;
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode->next != nullptr) {
		currentNode = currentNode->next;
	}
	
	currentNode->next = node;
}

void SimpleList::show() {
	if(head == nullptr) {
		std::cout << " -> nullptr";
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode != nullptr) {
		std::cout << " -> " << currentNode->value;
		
		currentNode = currentNode->next;
	}
	
	std::cout << " -> nullptr";
}

#endif
