#ifndef CIRCULARLIST_CPP
#define CIRCULARLIST_CPP

#include<iostream>

#include "CircularList.h"
#include "Person.h"

void CircularList::insert() {
	Person person;
	
	person.insert();
	
	Node *node = new Node(person);
	
	if(head == nullptr) {
		head = node;
		
		node->next = head;
		
		return;
	}
	
	Node *currentNode = head;
	
	while(currentNode->next != head) {
		currentNode = currentNode->next;
	}
	
	currentNode->next = node;
	node->next = head;
}

void CircularList::show() {
	if(head == nullptr) {
		std::cout << " -> nullptr";
		
		return;
	}
	
	Node *currentNode = head;
	
	do {
		std::cout << " -> " << currentNode->person.dni << ": " << currentNode->person.firstName << " " << currentNode->person.surName << std::endl;
		
		currentNode = currentNode->next;
	} while(currentNode != head);
}

#endif
