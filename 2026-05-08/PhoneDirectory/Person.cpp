#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>
#include <fstream>

#include <windows.h>

#include "Helper.h"
#include "Person.h"

bool Person::insert() {
	system("cls");
	
	Helper helper;
	
	helper.gotoxy(0, 0);
	std::cout << "Ingrese DNI: ";
	helper.gotoxy(0, 1);
	std::getline(std::cin, this->dni);
	
	this->idPerson = this->dni;
	
	helper.gotoxy(25, 0);
	std::cout << "Ingrese nombre: ";
	helper.gotoxy(25, 1);
	std::getline(std::cin, this->firstName);
	
	helper.gotoxy(50, 0);
	std::cout << "Ingrese apellido: ";
	helper.gotoxy(50, 1);
	std::getline(std::cin, this->surName);
	
	std::ofstream myFile("person.txt", std::ios::app);
	
	myFile << this->idPerson << "_______" << this->dni << "_______" << this->firstName << "_______" << this->surName << std::endl;
	
	myFile.close();
	
	return true;
}

#endif
