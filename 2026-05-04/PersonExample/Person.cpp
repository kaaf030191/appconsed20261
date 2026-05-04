#include <iostream>
#include <string>

#include "Person.h"

void Person::insertPerson(std::string firstName, std::string surName) {
	this->firstName = firstName;
	this->surName = surName;
}

void Person::showPerson() {
	std::cout << this->firstName << " " << this->surName;
}
