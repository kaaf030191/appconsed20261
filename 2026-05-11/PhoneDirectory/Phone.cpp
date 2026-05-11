#ifndef PHONE_CPP
#define PHONE_CPP

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

#include "Phone.h"
#include "Helper.h"
#include "Person.h"

bool Phone::insert() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	system("cls");
	
	Helper helper;
	Person person;
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	helper.gotoxy(helper.columnWidth * 0, 0);
	std::cout << "INGRESE DNI PERSONA: ";
	
	helper.gotoxy(helper.columnWidth * 1, 0);
	std::cout << "INGRESE NRO CELULAR: ";
	
	helper.gotoxy(helper.columnWidth * 2, 0);
	std::cout << "INGRESE OPERADOR: ";
	
	SetConsoleTextAttribute(hConsole, 7);
	
	helper.gotoxy(helper.columnWidth * 0, 1);
	std::getline(std::cin, this->idPerson);
	
	if(!person.existsByDni(this->idPerson)) {
		helper.gotoxy(helper.columnWidth * 0, 3);
		std::cout << "El DNI ingreso no existe.";
		
		return false;
	}
	
	helper.gotoxy(helper.columnWidth * 1, 1);
	std::getline(std::cin, this->number);
	
	helper.gotoxy(helper.columnWidth * 2, 1);
	std::getline(std::cin, this->idProvider);
	
	this->idPhone = this->idPerson + this->number;
	
	std::ofstream myFile("phone.txt", std::ios::app);
	
	myFile << this->idPhone << "|" << this->idPerson << "|" << this->idProvider << "|" << this->number << std::endl;
	
	myFile.close();
	
	return true;
}

#endif
