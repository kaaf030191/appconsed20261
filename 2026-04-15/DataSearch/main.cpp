#include<iostream>

#include "Helper.h"

int main (int argc, char *argv[]) {
	system("chcp 65001");

	Helper helper;
	int valueToSearch;
	
	std::cout << "Ingrese un valor entero que desee buscar en el vector: ";
	std::cin >> valueToSearch;
	
	int valuePosition = helper.linealSearch(valueToSearch);
	
	std::cout << std::endl;
	
	if(valuePosition >= 0) {
		std::cout << "El valor se encuentra en la posición " << valuePosition << " del vector.";
	} else {
		std::cout << "El valor buscado no fue encontrado.";
	}
	
	// std::cout << "El valor buscado " << (valuePosition >= 0 ? "fue encontrado en la posición " : "no fue encontrado ") << valuePosition;
	
	std::cout << std::endl;
	
	valuePosition = helper.binarySerch(0, (sizeof(helper.mySecondVector) / sizeof(int)) - 1, valueToSearch);
	
	if(valuePosition == -1) {
		std::cout << "El valor buscado no fue encontrado.";
	} else {
		std::cout << "El valor se encuentra en la posición " << valuePosition << " del vector.";
	}
	
	
	return 0;
}
