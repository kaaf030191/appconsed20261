#include<iostream>

#include "Person.h"

int main (int argc, char *argv[]) {
	Person person[100];
	
	person[0].insertPerson("Kevin Arnold", "Arias Figueroa");
	person[1].insertPerson("Litzy Alice Ilein", "Arias Quispe");
	person[2].insertPerson("Noahkev Stiven", "Arias Quispe");
	
	for(unsigned int i = 0; i < 3; i++) {
		person[i].showPerson();
		
		std::cout << std::endl;
	}
	
	return 0;
}
