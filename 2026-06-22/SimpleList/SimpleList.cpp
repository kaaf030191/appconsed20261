#ifndef SIMPLELIST_CPP
#define SIMPLELIST_CPP

#include <iostream>

#include "SimpleList.h"
#include "Product.h"

bool SimpleList::existsById(int id) {
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

void SimpleList::deleteById(int id) {
	if(head == nullptr) {
		std::cout << "No se encontraron datos.";
		
		return;
	}
	
	Node *currentNode = head;
	Node *previousNode = nullptr;
	
	while(currentNode != nullptr) {
		if(currentNode->product.isId(id)) {
			if(head == currentNode) {
				head = currentNode->next;
			} else {
				previousNode->next = currentNode->next;
			}
			
			delete currentNode;
			
			std::cout << std::endl << "Datos eliminados correctamente." << std::endl << std::endl;
			
			return;
		}
		
		previousNode = currentNode;
		currentNode = currentNode->next;
	}
	
	std::cout << "No se encontraron datos." << std::endl;	
}

void SimpleList::modifyById(int id, bool increment, int quantity) {
	if(head == nullptr) {
		std::cout << "No se encontraron datos.";
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode != nullptr) {
		if(currentNode->product.isId(id)) {
			currentNode->product.modifyQuantity(increment, quantity);
			
			return;
		}
		
		currentNode = currentNode->next;
	}
	
	std::cout << "No se encontraron datos.";
	
	std::cout << std::endl;
}

#endif
