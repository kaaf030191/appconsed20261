#ifndef MATRIX_CPP
#define MATRIX_CPP

#include <iostream>

#include "Matrix.h"

void Matrix::registerData() {
	std::cout << "Ingrese el nro de filas de la matriz: ";
	std::cin >> rows;
	
	std::cout << "Ingrese el nro de columnas de la matriz: ";
	std::cin >> columns;
	
	std::cout << std::endl;
	
	for(unsigned int i = 0; i < rows; i++) {
		for(unsigned int j = 0; j < columns; j++) {
			std::cout << "Matrix[" << i << "][" << j << "]: ";
			std::cin >> data[i][j];
		}
		
		std::cout << std::endl;
	}
}

void Matrix::showData() {
	std::cout << "La matriz es: " << std::endl << std::endl;
	
	for(unsigned int i = 0; i < rows; i++) {
		for(unsigned int j = 0; j < columns; j++) {
			std::cout << data[i][j] << "\t";
		}
		
		std::cout << std::endl << std::endl;
	}
}

#endif
