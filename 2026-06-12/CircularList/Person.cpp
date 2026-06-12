#ifndef PERSON_CPP
#define PERSON_CPP

#include<iostream>

#include "Person.h"

void Person::insert() {
	std::cout << "Ingrese el DNI: ";
	std::getline(std::cin, dni);
	
	std::cout << "Ingrese el nombre: ";
	std::getline(std::cin, firstName);
	
	std::cout << "Ingrese el apellido: ";
	std::getline(std::cin, surName);
}

#endif
