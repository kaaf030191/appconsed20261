#ifndef HELPER_CPP
#define HELPER_CPP

#include <iostream>

#include "Helper.h"

void Helper::addMatrix(Matrix firstMatrix, Matrix secondMatrix, Matrix &resultMatrix) {
	resultMatrix.rows = firstMatrix.rows;
	resultMatrix.columns = firstMatrix.columns;
	
	for(unsigned int i = 0; i < firstMatrix.rows; i++) {
		for(unsigned int j = 0; j < firstMatrix.columns; j++) {
			resultMatrix.data[i][j] = firstMatrix.data[i][j] + secondMatrix.data[i][j];
		}
	}
}

int Helper::showMenu() {
	unsigned int option;
	
	std::cout << "-----------------MENU DE OPCIONES-----------------" << std::endl;
	std::cout << "1. Registrar datos para la matriz A." << std::endl;
	std::cout << "2. Registrar datos para la matriz B." << std::endl;
	std::cout << "3. Mostrar datos de la matriz A y B." << std::endl;
	std::cout << "4. Sumar matriz A y B y mostrar el resultado." << std::endl;
	std::cout << "5. Mostrar diagonal principal de la matriz A." << std::endl;
	std::cout << "6. Mostrar diagonal secundaria de la matriz B." << std::endl;
	std::cout << "0. Salir." << std::endl << std::endl;
	
	std::cout << "Ingrese la opción: ";
	std::cin >> option;
	
	return option;
}

#endif
