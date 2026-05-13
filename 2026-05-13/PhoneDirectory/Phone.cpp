#ifndef PHONE_CPP
#define PHONE_CPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <windows.h>

#include "Phone.h"
#include "Helper.h"
#include "Person.h"

std::string Phone::getOperator(int operatorSelected) {
	switch(operatorSelected) {
	case 1:
		return "Claro";
		
	case 2:
		return "Movsitar";
		
	case 3:
		return "Entel";
		
	case 4:
		return "Bitel";
		
	default:
		return "Otros";
	}
}

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
	helper.gotoxy(helper.columnWidth * 2, 1);
	std::cout << "( )";
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	helper.gotoxy(helper.columnWidth * 2, 2);
	std::cout << "(1) - Claro";
	helper.gotoxy(helper.columnWidth * 2, 3);
	std::cout << "(2) - Movistar";
	helper.gotoxy(helper.columnWidth * 2, 4);
	std::cout << "(3) - Entel";
	helper.gotoxy(helper.columnWidth * 2, 5);
	std::cout << "(4) - Bitel";
	
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
	
	helper.gotoxy((helper.columnWidth * 2) + 1, 1);
	std::getline(std::cin, this->provider);
	
	this->provider = this->getOperator(std::stoi(this->provider));
	
	this->idPhone = this->idPerson + this->number;
	
	std::ofstream myFile("phone.txt", std::ios::app);
	
	myFile << this->idPhone << "|" << this->idPerson << "|" << this->provider << "|" << this->number << std::endl;
	
	myFile.close();
	
	return true;
}

int Phone::showData(std::string dni) {
	int rowsNumber = 0;
	std::ifstream myFile("phone.txt");
	
	std::string line, word;
	
	bool continueLine = false;
	bool ourData = false;
	
	while(std::getline(myFile, line)) {
		std::stringstream stream(line);
		
		continueLine = true;
		ourData = false;
		
		while(std::getline(stream, word, '|')) {
			if(continueLine) {
				continueLine = false;
				continue; 
			}
			
			if(!ourData && dni == word) {
				ourData = true;
				std::cout << "       > ";
				continue;
			}
			
			if(ourData) {
				std::cout << word << " | ";
			}
		}
		
		if(ourData) {
			std::cout << std::endl;
			rowsNumber++;
		}
	}
	
	return rowsNumber;
}

#endif
