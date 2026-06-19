#ifndef SIMPLELIST_CPP
#define SIMPLELIST_CPP

#include <iostream>

#include "SimpleList.h"
#include "Product.h"

bool SimpleList::existsProductoById(int id) {
	if(head == nullptr) {
		return false;
	}
	
	Node *currentNode = head;
	
	while(currentNode != nullptr) {
		if(currentNode->product.isId(id)) {
			return true;
		}
		
		currentNode = currentNode->next;
	}
	
	return false;
}

void SimpleList::insert(Product product) {	
	Node *node = new Node(product);
	
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
		std::cout << "No se encontraron datos.";
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode != nullptr) {
		currentNode->product.show();
		
		currentNode = currentNode->next;
	}
	
	std::cout << std::endl;
}

void SimpleList::showById(int id) {
	if(head == nullptr) {
		std::cout << "No se encontraron datos.";
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode != nullptr) {
		if(currentNode->product.isId(id)) {
			currentNode->product.show();
			
			return;
		}
		
		currentNode = currentNode->next;
	}
	
	std::cout << "No se encontraron datos.";
	
	std::cout << std::endl;
}

#endif
